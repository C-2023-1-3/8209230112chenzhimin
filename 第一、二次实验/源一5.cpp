#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f, c;
	cout << "请输入华氏温度" << endl;
	cin >> f;
	c = (f - 32) / 1.8;
	cout << "转化成摄氏度为" << fixed << setprecision(2) << c << endl;
	return 0;
}
