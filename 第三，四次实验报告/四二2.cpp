#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int sum = 0, i = 0;
	for (; i< 20; i++)
	{
		if (hexString[i]=='\0')
		{
			break;
		}
	}
	i--;
	for (int g=1; i>=0; i--,g=g*16)
	{
		int k = 0;
		if ((hexString[i] >= 48 && hexString[i] <= 57)|| (hexString[i] >= 65 && hexString[i] <= 90)|| (hexString[i] >= 97 && hexString[i] <= 122))
		{
			if (hexString[i] >= 48 && hexString[i] <= 57)
			{
				k = hexString[i] - 48;
			}
			if (hexString[i] >= 65 && hexString[i] <= 90) 
			{
				k = hexString[i] - 65+10;
			}
			if (hexString[i] >= 97 && hexString[i] <= 122)
			{
				k = hexString[i] - 97+10;
			}
		}
		sum =sum+k*g;
	}
	return sum;
}
char hexstr[20];
int main()
{
	cin >> hexstr;
	cout<<parseHex(hexstr);
	return 0;
}
