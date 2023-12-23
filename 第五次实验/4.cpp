#include <iostream>            
using namespace std;
class Student
{
private:
	long Id;
	int Score;
public:
	Student(long id, int score);
	void Max(Student *stu);
};
Student::Student(long id, int score)
{
	Id = id;
	Score = score;
}
void Student::Max(Student *stu)
{
	for(int c=0;c<4;c++)
	{
	for (int i = 0; i < 4; i++) {
		if ((stu+i)->Id <( stu+i+1)->Id)
		{
			swap((stu + i)->Id, (stu + i + 1)->Id);
			swap((stu + i)->Score, (stu + i + 1)->Score);
		}
	}
	}
	cout << stu->Id<<" " << stu->Score;
}

int main()
{
	Student stu[5] = {
		Student(82001,89),Student(82002,79),
		Student(82003,87),Student(82004,93),Student(8205,83),
	};
	stu->Max(stu);
	return 0;
}

