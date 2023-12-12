#include<iostream>  
using namespace std;

bool is_prime(int num)
{
	if (num < 2) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int num = 2, a[250];
	int n = 0;
	for (int i = 2;n<240;i++)
	{
		if (is_prime(i)) {
			a[n] = i;
			n++;
		}
	}
	for (int k = 0; k<200; )
	{
		for(int i=0;i<10;)
		{
			cout << a[i+k] << '\t';
			i++;
		}
		k = k + 10;
		cout << '\n';
	}
	return 0;
}
