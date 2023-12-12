#include<iostream>
using namespace std;
int main()
{
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = true;
	}
	for (int a = 1; a < 100; a++)
	{
		int b = 0;
		for (int k = a + b; k < 100; b = a + 2, k = k + b)
		{
			arr[k] = !arr[k];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == true)
		{
			cout << i << " ";
		}
	}
	return 0;
}





