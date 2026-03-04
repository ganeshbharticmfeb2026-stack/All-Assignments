

#include <iostream>
using namespace std;

class Employee
{
	const int empid = 0;
	string name;
	float salary;

public:
	Employee()
	{
		name  = "not assgined";
		salary = 00;
	}

	Employee(int empid,string name,float salary):empid(empid),name(name),salary(salary)
	{

	}

	void printDetails()
	{
		cout<<"=======Employee details======"<<endl;
		cout<<"Enployee id : "<<empid<<endl;
		cout<<"Employee Name : "<<name<<endl;
		cout<<"Employee salary :"<<salary<<endl;
	}
};

int main() {
	Employee emp(1001,"ganesh bharti",50000);
	emp.printDetails();
	return 0;
}
