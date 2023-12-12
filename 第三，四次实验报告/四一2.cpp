#include<iostream>
using namespace std;
void arr(double list[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j],list[j + 1]);
				changed = true;
			}
	} while (changed);

}
int main()
{
	double list[10] = { 1.3,0.3,5.66,32.34,4.35,34.65,7.89,5.4,3.7 ,10.1};
	arr(list);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}




