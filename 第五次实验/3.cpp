#include<iostream>
using namespace std;
class CFT            
{
private:
	int length, width, height;
public:
	int Arr() {
		int v;
		cin >> length >> width >> height;
		v = length * width * height;

		return v;
	}
};
int main() {
	int arr, brr, crr;
	CFT a, b, c;
	cout << "��ֱ��������鳤����ĳ�������" << endl;
	arr = a.Arr(), brr = b.Arr(), crr = c.Arr();
	cout <<"��������ֱ�Ϊ" <<arr << " " << brr << " " << crr << endl;
	return 0;
}