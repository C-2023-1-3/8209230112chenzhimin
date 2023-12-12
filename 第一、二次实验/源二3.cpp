#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c&& a + c > b&&b + c > a)
	{
		cout << "周长为" << a + b + c << endl;
		if (a == b || a == c || b == c)
		{
			cout << "它是等腰三角形";
		}
		else
		{
			cout << "它不是等腰三角形";
		}
	}
	else{
		cout << "无法构成三角形";
	}
	return 0;
}
