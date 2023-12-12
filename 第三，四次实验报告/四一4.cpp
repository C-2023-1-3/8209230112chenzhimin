#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++) {
		list3[i] = list1[i];	
	}
	for (int i = size1; i < size1+size2; i++) {
		list3[i] = list2[i-size1];
	}
	for (int i=0;i<size1+size2;i++)
	{
		for (int k=0;k< size1 + size2-1;k++)
		{
			if (list3[k] > list3[k + 1])
			{
				swap(list3[k], list3[k + 1]);
			}
		}
	}
}
int main()
{	
	 int list1[80],size1, list2[80], size2,  list3[80];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];	
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++) {
		cin >> list2[i];
	}
	
	cout << "The merged list is"<<" ";
	merge(list1, size1, list2, size2, list3);
	for (int i = 0; i < size1+size2; i++) {
		cout<< list3[i]<<" ";
	}
	return 0;
}




