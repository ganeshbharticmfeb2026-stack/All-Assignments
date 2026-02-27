/*
 Q6. Pointer Swap
Declare three integer variables: x = 10, y = 20, z = 30.
Create three pointers px, py, pz pointing to them.
Using only pointer dereferencing (no direct use of x, y, z after declaration):
Swap the values of x and z.
Print all three variables before and after the swap.
Also print the addresses stored in each pointer to conrm they did not change
 */

#include <iostream>
using namespace std;

void swapVar(int &x,int &y,int &z)
{
	int temp  = x;
	x = z;
	z = temp;
}

int main() {
	int x = 10;
	int y = 20;
	int z = 30;
	cout<<"before swap : "<<endl;
	cout<< "value of x :"<< x << "addres of x is" << &x << endl;
	cout<< "value of y :"<< y << "addres of y is" << &y << endl;
	cout<< "value of z :"<< z << "addres of z is" << &z << endl;

	swapVar(x,y,z);

	cout<<"After swap : "<<endl;
	cout<< "value of x :"<< x << "addres of x is" << &x << endl;
	cout<< "value of y :"<< y << "addres of y is" << &y << endl;
	cout<< "value of z :"<< z << "addres of z is" << &z << endl;
	return 0;
}
