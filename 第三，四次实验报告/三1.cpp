#include<iostream>
using namespace std;

int math(int a, int b)
{
	int c;
	if (a<b)
	{
		c = a, a = b, b = c;
	}
	for (; a % b!=0; )
	{
		c = a % b,a = b, b = c;
	}

	return b;
}

int main()
{
	int m ,n,d;
	cin >> m >> n;
	math(m, n);
	d = m * n / math(m, n);
	cout << "���Լ��,��С�������ֱ�Ϊ" <<math(m,n)<<"��"<<d<<endl;
	
	return 0;
}