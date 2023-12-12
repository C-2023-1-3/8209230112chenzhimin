#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
	double apple = 0.8,amounts=0;
	int i=2,day=0;
	for (; i <= 100;day++)
	{
		amounts = amounts + apple * i;
		i = i * 2;


	}
	cout <<"平均每天花"<< amounts / day<<"元";
	return 0;
}
