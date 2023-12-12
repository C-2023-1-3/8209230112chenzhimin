
#include<iostream>  
#include"mytriangle.h"

using namespace std;
int main()
{
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << _area(side1, side2, side3);
	}
	else {
		cout << "无法构成三角形";
	}
	return 0;
}