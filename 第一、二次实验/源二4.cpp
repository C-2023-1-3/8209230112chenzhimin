#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	int choose;
	double a, b;
	char c;
back:
	cout << "请输入你要进行运算的两个数字" << endl;
	cin >> a>>b;
	cout << "请输入运算符+，-，*，/" << endl;
goback:
	cin >> c;
	switch (c)
	{
	case '+':cout << a + b << endl;
		cout << "请选择：1，继续计算 2，结束" << endl;
		int choose;
		cin >> choose;
		if (choose==1)
		{
			goto back;
		}
		else
		{
			break;
		}
	case'-':cout << a - b << endl;
		cout << "请选择：1，继续计算 2，结束" << endl;
		
		cin >> choose;
		if (choose == 1)
		{
			goto back;
		}
		else
		{
			break;
		}
	case'*':cout << a * b << endl;
		cout << "请选择：1，继续计算 2，结束" << endl;
		
		cin >> choose;
		if (choose == 1)
		{
			goto back;
		}
		else
		{
			break;
		}
	case'/':cout << a / b << endl;
		cout << "请选择：1，继续计算 2，结束" << endl;
		
		cin >> choose;
		if (choose == 1)
		{
			goto back;
		}
		else
		{
			break;
		}
	default:cout << "无效运算符，请重新输入" << endl;
		goto goback;
	}
	return 0;
}
