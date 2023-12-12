#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
	string i = "*", t = "*";
	for (int a = 1; a <= 5; a++, i = i + t)
	{
		cout << i << endl;
	}
	return 0;
}
