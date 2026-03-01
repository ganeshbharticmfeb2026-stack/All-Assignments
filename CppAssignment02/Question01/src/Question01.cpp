#include <iostream>
using namespace std;

class Student
{
	string name;
	int rollnum;
	float marks;
	char grade;

public:

	string getName() const
	{
		return name;
	}

	int getRollnum() const
	{
		return rollnum;
	}

	float getMarks() const
	{
		return marks;
	}

	char getGrade() const
	{
		return grade;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setRollnum(int rollnum)
	{
		this->rollnum = rollnum;
	}

	void setMarks(float marks)
	{
		this->marks = marks;
	}

	void setGrade(char grade)
	{
		this->grade = grade;
	}


	   char calculateGrade()
	    {
	        if (marks >= 90 && marks <= 100)
	            grade = 'A';
	        else if (marks >= 80)
	            grade = 'B';
	        else if (marks >= 70)
	            grade = 'C';
	        else if (marks >= 60)
	            grade = 'D';
	        else
	            grade = 'F';

	        cout << "Grade Calculated Successfully!\n";
	        return grade;
	    }

	void displayData()
	{
		cout<<"---------- Student Data ---------"<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"Roll number :"<<rollnum<<endl;
		cout<<"Marks :"<<marks<<endl;
		cout<<"Grade :"<<grade<<endl;
	}

	void accpetData()
			{

				cout<<"Enter Name here : "<<endl;
				cin>>name;

				cout<<"Enter Roll num here : "<<endl;
				cin>>rollnum;

				cout<<"Enter marks here : "<<endl;
				cin>>marks;

			}

};

int main() {

	Student s1;
	s1.accpetData();
	char grade = s1.calculateGrade();
	int choise ;
	cout<<"-----Menu------"<<endl;
	cout<<"1.Accept Informarion"<<endl;
	cout<<"2.Display Information"<<endl;
	cout<<"3.Calculate Grade"<<endl;

	cout<<"Enter choise here "<<endl;
	cin>>choise;

	switch (choise)
	{
	case 1:

		break;

	case 2:

			s1.displayData();
		break;

	case 3:
			cout<<"Grade : "<<grade<<endl;
		break;

	default:
			cout<<"invalid output"<<endl;
		break;
	}

	return 0;
}
