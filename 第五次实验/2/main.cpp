#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main()
{
	Student stud;
	char r[20] = "tcg";
	stud.set_value(7,r, 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}
