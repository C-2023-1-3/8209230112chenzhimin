
#include<iostream>  
using namespace std;

extern int n=1;
int ss(int num)
{

	if (n<10)
	{
		num=(num + 1) * 2;
		n++;
			return ss( num);
	}
	else {
		return num;
	}
}
int main()
{
	int num=1;
	cout << ss(num);
	return 0;
}