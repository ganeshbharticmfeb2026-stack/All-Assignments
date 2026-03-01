#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;

public:
    void setEmpID(int id)
    {
        empID = id;
    }

    void setEmpName(string name)
    {
        empName = name;
    }

    void setEmpSalary(double salary)
    {
        empSalary = salary;
    }

    int getEmpID() const
    {
        return empID;
    }

    string getEmpName() const
    {
        return empName;
    }

    double getEmpSalary() const
    {
        return empSalary;
    }

    double calculateGrossSalary() const
    {
        double bonus = 0;

        if (empSalary <= 5000)
            bonus = empSalary * 0.10;
        else if (empSalary <= 10000)
            bonus = empSalary * 0.15;
        else
            bonus = empSalary * 0.20;

        return empSalary + bonus;
    }

    void displayEmployeeDetails() const
    {
        cout << "\n---- Employee Details ----\n";
        cout << "ID: " << empID << endl;
        cout << "Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};

int main()
{
    Employee employees[100];   // Fixed array
    int count = 0;             // Number of employees
    int choice;

    do
    {
        cout << "\n------ Payroll Management System ------\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (count >= 100)
            {
                cout << "Employee limit reached!\n";
                break;
            }

            int id;
            string name;
            double salary;
            bool idExists = false;

            cout << "Enter Employee ID: ";
            cin >> id;

            // Check unique ID
            for (int i = 0; i < count; i++)
            {
                if (employees[i].getEmpID() == id)
                {
                    idExists = true;
                    break;
                }
            }

            if (idExists)
            {
                cout << "Employee ID already exists!\n";
                break;
            }

            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Employee Salary: ";
            cin >> salary;

            employees[count].setEmpID(id);
            employees[count].setEmpName(name);
            employees[count].setEmpSalary(salary);

            count++;

            cout << "Employee Added Successfully!\n";
            break;
        }

        case 2:
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (employees[i].getEmpID() == id)
                {
                    cout << "Gross Salary: "
                         << employees[i].calculateGrossSalary() << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";

            break;
        }

        case 3:
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (employees[i].getEmpID() == id)
                {
                    employees[i].displayEmployeeDetails();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Employee ID to update: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (employees[i].getEmpID() == id)
                {
                    string newName;
                    double newSalary;

                    cout << "Enter New Name: ";
                    cin.ignore();
                    getline(cin, newName);

                    cout << "Enter New Salary: ";
                    cin >> newSalary;

                    employees[i].setEmpName(newName);
                    employees[i].setEmpSalary(newSalary);

                    cout << "Employee Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found!\n";

            break;
        }

        case 5:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
