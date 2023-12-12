
#include<iostream>  
using namespace std;
int indexof(const char* s1, const char* s2)
{
	return string(s2).find(s1);
}

int main()
{
	const char* s1="abc";
	const char* s2 = "akfkadabcyeu";
		cout << indexof(s1, s2);
		return 0;
}


