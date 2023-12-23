#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	Student stud;
	char r[20] = "tcg";
	stud.set_value(7,r, 'm');
	stud.display();              //执行stud对象的display函数
	return 0;
}
