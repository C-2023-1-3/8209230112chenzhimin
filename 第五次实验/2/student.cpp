#include <iostream>
#include"student.h";  //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int num1, char name1[20], char sex1)
{
   num = num1;
   for (int i = 0; i < 20; i++) {
       name[i] = name1[i];

   }
   sex = sex1;
}
