#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
	int a, b, m, c, d;
	cin >> a >> b;
	c = a, d = b;
	while (1)
	{
		m = a % b;
		if ((a % b) == 0)
		{
			cout << "最大公约数为" << b;
			break;
		}
		else
		{
			a = b, b = m;
		}
	}
	cout << ",最小公倍数为" << (c / b) * (d / b) * b << endl;
	return 0;
}
