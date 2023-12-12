#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double pi = 3.14159;
	int r, h;
	cout << "请输入r和h的值" << endl;
	cin >> r >> h;
	double v;
	v = (1.0 / 3) * pi * r * r * h;
	cout << "圆锥体积为" << v << endl;
	return 0;
}