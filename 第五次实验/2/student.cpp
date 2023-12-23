#include <iostream>
#include"student.h";  //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int num1, char name1[20], char sex1)
{
   num = num1;
   for (int i = 0; i < 20; i++) {
       name[i] = name1[i];

   }
   sex = sex1;
}
