#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	return string(s2).find(s1);
}

int main()
{
	char s1[40], s2[40];
	cout << "Enter the first string:";
	cin.get(s1, 40);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清除输入缓冲区中的内容  
	cout << "Enter the second string:";
	cin.get(s2, 40);
	cout << "indexOf(“welcome”, “We welcome you!”) is "<< indexOf(s1, s2);
	return 0;
}





