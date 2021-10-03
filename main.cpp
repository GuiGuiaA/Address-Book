#include <iostream>
#include "string"
#include <cstdlib>
#define MAX 1000
using namespace std;

// 人的结构体，其各种属性。
struct Person{
    string pName;
    int pSex;
    int pAge;
    string pPhone;
    string pAddress;
};

// 通讯录的结构体 人的数组和最大存储人数。
struct Addressbook{
    struct Person personArray[MAX];
    int pSize;
};

void ShowMenu(){

    cout << "******************************" << endl;
    cout << "***  1.Add contacts  *********" << endl;
    cout << "***  2.Show contacts  ********" << endl;
    cout << "***  3.Delete contacts  ******" << endl;
    cout << "***  4.Find contacts  ********" << endl;
    cout << "***  5.Modify contacts  ******" << endl;
    cout << "***  6.Empty contacts  *******" << endl;
    cout << "***  7.Exit address book  ****" << endl;
    cout << "******************************" << endl;
}

void addContacts(Addressbook *per){

    if (per->pSize == MAX) {
        cout << " Address book full " << endl;
        return;
    } else {
        string name;
        cout << " put into nam " << endl;
        cin >> name;
        // 名字要放在数组中，通过通讯录结构体中数组的大小来添加人员个数。
        per->personArray[per->pSize].pName = name;

        cout << " Enter Sex " << endl;
        cout << " 1---man " << endl;
        cout << " 2---woman " << endl;
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                per->personArray[per->pSize].pSex = sex;
                break;
            }
            cout << " Input error, re-inpu " << endl;
        }

        cout << " Enter age " << endl;
        int age = 0;
        cin >> age;
        per->personArray[per->pSize].pAge = age;

        cout << " Enter phone " << endl;
        string phone;
        cin >> phone;
        per->personArray[per->pSize].pPhone = phone;

        cout << " Enter address " << endl;
        string address;
        cin >> address;
        per->personArray[per->pSize].pAddress = address;

        per->pSize++; // 更新通讯录中的人数。
        cout << " Added successfully " << endl;

    }
    system("pause"); // 按任意键继续执行。
    system("cls"); // 清屏操作。

}

void showContacts(Addressbook *per){
    if (per->pSize == 0){
        cout << " Current address book is empty " << endl;
    } else{
        for (int i = 0; i < per->pSize; ++i) {
            cout << "name: " << per->personArray[i].pName << "\t";
            cout << "sex: " << per->personArray[i].pSex << "\t";
            cout << "age: " << per->personArray[i].pAge << "\t";
            cout << "phone: " << per->personArray[i].pPhone << "\t";
            cout << "address: " << per->personArray[i].pAddress << endl;
        }
    }
    system("pause"); // 按任意键继续执行。
    system("cls"); // 清屏操作。
}

// 若定义的函数没有返回值，则可以使用void定义的函数，有返回值的使用int等定义的。
// 定义此函数的是检测输入的通讯录中是否有当前查找的人。
int examine(Addressbook *per,string name){
    for (int i = 0; i < per->pSize; ++i) {
        if (per->personArray[i].pName == name){
            return i;
        }
    }
    return -1;

    //system("pause"); // 按任意键继续执行。
    //system("cls"); // 清屏操作。
}

void deletecontact(Addressbook *per){
    cout << "Delete the contact's name" << endl;

    string name;
    cin >> name;

    int ret = examine(per,name);
    if (ret != -1){
        for (int i = 0; i < per->pSize; ++i) {
            per->personArray[i] = per->personArray[i+1];
        }
        per->pSize--;
        cout << "Delete succeeded" << endl;
    } else{
        cout << "No such contact" << endl;
    }

    system("pause");
    system("cls");
}


int main() {

    Addressbook per;
    per.pSize = 0;

    int selent = 0;

    while(true){

        ShowMenu();

        cin >> selent;
        switch (selent) {
            case 1:
                addContacts (&per); // 值传递无法改变实参，所以得传入地址,可以修改实参。
                break;
            case 2:
                showContacts(&per);
                break;
            case 3:
            {
                /*cout << "Delete the contact's name" << endl;
                string name;
                cin >> name;

                if (examine(&per,name) == -1){
                    cout << "No such contact" << endl;
                } else{
                    cout << "Find this contact" << endl;
                }*/

                deletecontact(&per);

                system("pause"); // 按任意键继续执行。
                system("cls"); // 清屏操作。
            }
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                cout << " Welcome to use next time " << endl;
                system("pause");
                return 0;
              //break;
            default:
                break;
        }
    }
}
