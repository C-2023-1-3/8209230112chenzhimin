#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a,x1, x2;
	cin >> a;
	x1 = a;

	for (; 1;)
	{
		x2 = 0.5 * (x1 + a / x1);
		if (fabs(x1-x2)<1e-5)
		{
			cout<<setprecision(10) << x2;
			break;
			
		}
		else
		{
			x1 = x2;
		}
	}
	return 0;
}
