
#include <iostream>
using namespace std;

int main() {
	int num = 30;
	int *ptr = &num;
	int &ref = num;

	cout<<"num variable values :"<<num<<endl;
	*ptr = 20;
	cout<<"modfiy values pointer variable :"<<num<<endl;
	ref = 10;
	cout<<"modfiy values refrences variable :"<<num<<endl;

	cout << "!!!Hello World!!!" << endl;
	return 0;
}
