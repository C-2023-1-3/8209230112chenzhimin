#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int a=0;a<25;a++)
	{
		for (int b = 0; b < 40; b++)
		{
			if((s[b]>=65&&s[b]<=90)||(s[b]>=97&&s[b]<=122))
			{
				if (s[b] == 65 + a || s[b] == 97 + a)
			  {
				counts[a]++;
			  }
			}
		}
	}
}
int main()
{
	char s[40],arr[26]; int counts[25];
	for (int i = 0; i < 25; i++) 
	{
		counts[i] = 0;
		arr[i] = 97 + i;
	}
	cout << "Enter a string:";
	cin.get(s, 40);
    count(s, counts);
	for (int i = 0; i < 25; i++)
	{
		if (counts[i] != 0) 
		{
			cout<<arr[i]<<":" << counts[i] <<" times"<<endl;
		}
	}
	return 0;
}



