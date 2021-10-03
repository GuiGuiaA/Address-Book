#include <iostream>
#include "string"
#include <cstdlib>


#define MAX 1000
// 这里使用宏常量定义是方便以后的维护和更改。


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
// (1) 其中的元素类型都是 Person 类型，数组做大的容量为 MAX。
// (2) 还有一个是 int 类型，表示通讯录当前的大小。
struct Addressbook{
    struct Person personArray[MAX];
    int pSize;
};


// 展示功能目录
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

// 添加联系人函数
void addContacts(Addressbook *per){

    if (per->pSize == MAX) {
        cout << " Address book full " << endl;
        return;
    } else {

        // 名字
        string name;
        cout << " put into nam " << endl;
        cin >> name;
        // 名字要放在数组中，通过通讯录结构体中数组的大小来添加人员个数。
        per->personArray[per->pSize].pName = name;

        // 性别
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

        // 年龄
        cout << " Enter age " << endl;
        int age = 0;
        cin >> age;
        per->personArray[per->pSize].pAge = age;

        // 电话
        cout << " Enter phone " << endl;
        string phone;
        cin >> phone;
        per->personArray[per->pSize].pPhone = phone;

        // 家庭住址
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

// 显示通讯录
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
// 若检测到查找的人，则返回此名字表示找到，若没有找到返回 -1 表示没有此人。后续会有相应的表示输出。
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

// 删除联系人函数
// 其思想就是通过覆盖来减少数组元素，进而释放内存。
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

// 查找联系人函数
void Findcontact(Addressbook *per) {

    cout << "Please input you find " << endl;
    string name;
    cin >> name;

    int ret = examine(per, name);
    if (ret != -1) {
        cout << "name: " << per->personArray[ret].pName << "\t";
        cout << "sex: " << per->personArray[ret].pSex << "\t";
        cout << "age: " << per->personArray[ret].pAge << "\t";
        cout << "phone: " << per->personArray[ret].pPhone << "\t";
        cout << "address: " << per->personArray[ret].pAddress << endl;
    } else{
        cout << "No such contact" << endl;
    }
    system("pause");
    system("cls");
}

//修改联系人函数
void Modifycontact(Addressbook *per){

    cout << "Enter the contact you are looking for" << endl;
    string name;
    cin >> name;

    int ret = examine(per,name);
    if (ret != -1){

        // 名字
        string name;
        cin >> name;
        per->personArray[ret].pName = name;

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

        // 年龄
        cout << " Enter age " << endl;
        int age = 0;
        cin >> age;
        per->personArray[per->pSize].pAge = age;

        // 电话
        cout << " Enter phone " << endl;
        string phone;
        cin >> phone;
        per->personArray[per->pSize].pPhone = phone;

        // 家庭住址
        cout << " Enter address " << endl;
        string address;
        cin >> address;
        per->personArray[per->pSize].pAddress = address;



    } else{
      cout << "No such contact" << endl;
    }
    system("pause");
    system("cls");
}

// 清空联系人函数
// 其思想就是直接把结构体的数组更改为零。
void ClearContact(Addressbook *per){

    per->pSize = 0;
    cout << "Cleared contacts" << endl;

}


int main() {

    Addressbook per;  // per 为 Addressbook 类型的一个参数。 (通讯录结构体变量)
    per.pSize = 0;

    int selent = 0; // selent为switch case选项跳转数，确定跳转到哪个分支进行执行。

    while(true){  // while 循环 输出正确后继续接着下面的内容操作，若输入错误则进入错误循环。

        ShowMenu();

        cin >> selent;
        switch (selent) {
            case 1: // 添加联系人。
                addContacts (&per); // 值传递无法改变实参，所以得传入地址,可以修改实参。
                break;
            case 2: // 显示联系人。
                showContacts(&per);
                break;
            case 3: // 删除联系人。
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
            case 4: // 查找联系人。
                Findcontact(&per);
                break;
            case 5: // 修改联系人。
                Modifycontact(&per);
                break;
            case 6: // 清空联系人。
                ClearContact(&per);
                break;
            case 7: // 推出通讯录。
                cout << " Welcome to use next time " << endl;
                system("pause");
                return 0;
              //break;
            default:
                break;
        }
    }
}
