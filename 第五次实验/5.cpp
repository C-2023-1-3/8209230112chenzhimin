#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point() {
		x = 60, y = 80;
	}
	void setPoint(int i, int j);
	void display();
};

void Point::setPoint(int i, int j)
{
	x = x + i, y = y + j;
}
void Point::display()
{
	cout <<"("<< x <<"," << y<<")";
}
int main() {
	Point arr;
	arr.setPoint(2,5);
	arr.display();
	return 0;
}


