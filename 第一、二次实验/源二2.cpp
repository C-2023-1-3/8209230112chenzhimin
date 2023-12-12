#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x, y;
	cout << "x=";
	cin >> x;
	if (x >= 1)
	{
		if (x >= 1 && x < 5)
		{
			y = 2.0 / (4 * x) + 1;
			cout <<"y=" << y << endl;
		}
		else {
			y = x * x;
			cout<<"y=" << y;
		}
	}
	else if (x != 0) {
		y = 3 - 2 * x;
		cout<<"y=" << y << endl;
	}
	else {
		cout << "不在函数自变量取值范围";
	}
	return 0;
}
