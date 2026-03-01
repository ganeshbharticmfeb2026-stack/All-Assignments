
#include <iostream>
using namespace std;

class BankAccount
{
private:
	int accountNumber = 251200170;
	string accountHoldeName = "ganesh bharti";
	double balance = 2500.00;

public:
	const string& getAccountHoldeName() const {
		return accountHoldeName;
	}

	void setAccountHoldeName(const string &accountHoldeName) {
		this->accountHoldeName = accountHoldeName;
	}

	int getAccountNumber() const {
		return accountNumber;
	}

	void setAccountNumber(int accountNumber) {
		this->accountNumber = accountNumber;
	}

	double getBalance() const {
		return balance;
	}

	void setBalance(double balance) {
		this->balance = balance;
	}

void withdraw()
{
	int withdrawAmount;
	cout<<"Enter withdraw amount here :"<<endl;
	cin>>withdrawAmount;
	if (balance != 0 && 0 == balance)
	{
		balance -= withdrawAmount;
		cout<<"withdraw  "<<withdrawAmount<<" succesfully..."<<endl;
		cout<<"Balance :"<<balance<<endl;
	}
	else
	{
		cout<<"insufficient amount..."<<endl;
	}
}


void deposit()
{
	int depositAmount;
	cout<<"Enter deposit amount here :"<<endl;
	cin>>depositAmount;

		balance +=depositAmount;
		cout<<"Deposit "<<depositAmount<<" succesfully..."<<endl;
		cout<<"Balance :"<<balance<<endl;
}


void displayAccountDetails()
{
	cout<<"------Account Details------"<<endl;
	cout<<"Account No. : "<<accountNumber<<endl;
	cout<<"Account Holder Name : "<<accountHoldeName<<endl;
	cout<<"Balance : "<<balance<<endl;
}

};

int main() {

		int choise;
		BankAccount obj;
		cout<<"------Menu------"<<endl;
		cout<<"1. Deposit Money "<<endl;
		cout<<"2. Withdraw Money "<<endl;
		cout<<"3. Display account details"<<endl;
		cout<<"4. Exit "<<endl;
		cout<<"Enter your choise here"<<endl;
		cin>>choise;

		switch(choise)
		{
		case 1:
			obj.deposit();
			break;
		case 2:
			obj.withdraw();
			break;

		case 3:
			obj.displayAccountDetails();
			break;
		case 4:
				cout<<"Exit program...."<<endl;
			break;

		default:
			cout<<"invalid input"<<endl;
			break;
		}
	return 0;
}
