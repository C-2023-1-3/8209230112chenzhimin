#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void arr() {
		cin >> hour;      //�����趨��ʱ�� 
		cin >> minute;
		cin >> sec;
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main() {
	Time tl;
	tl.arr();
	return 0;
}
