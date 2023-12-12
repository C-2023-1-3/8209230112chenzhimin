#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{

	
	
	
		char a;
		cin >> a;
		if (a >= 97)
		{
			cout << char(a - 32);
		}
		else {
			cout << int(a)+1;
		}
	


	return 0;
}
