#include<iostream>
using namespace std;
void arr(int* p = new int[5])
{
	
	for (int a=0;a<4;a++)
	{
	   for (int i = 0; i < 4; i++)
	   {
		  if (p[i] > p[i + 1])
		  {
			swap(p[i], p[i + 1]);
		   }
	   }
	}
}
int main()
{
	int* p = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> p[i];
	}
	arr(p);
	for (int i = 0; i < 5; i++)
	{
		cout <<*( p + i)<<" ";
	}
	delete[] p;
	return 0;
}