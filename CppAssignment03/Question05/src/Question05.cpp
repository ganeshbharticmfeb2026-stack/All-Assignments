

#include <iostream>
using namespace std;

class Student
{
	int rollNo;
	string name;
	float marks;

public:
	Student()
	{
		rollNo = 00;
		name = "not assigned";
		marks = 00;

	}



	Student(int rollNo,string name,float marks)
		{
			this->rollNo = rollNo;
			this->name = name;
			this->marks = marks;
		}

	void printDetails()
	{
		cout<<"Student Roll No : "<<rollNo<<endl;
		cout<<"Student Name : "<<name<<endl;
		cout<<"Student marks : "<<marks<<endl;
	}
};
int main() {
	Student s;
	s.printDetails();
	Student s1(101,"ganesh",85.0);
	s1.printDetails();
	Student s2(102,"bharti",65.00);
	s2.printDetails();

	return 0;
}


