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
	cout << "请分别输入三组长方体的长、宽、高" << endl;
	arr = a.Arr(), brr = b.Arr(), crr = c.Arr();
	cout <<"它们体积分别为" <<arr << " " << brr << " " << crr << endl;
	return 0;
}