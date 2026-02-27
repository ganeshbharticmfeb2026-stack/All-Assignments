
#include <iostream>
using namespace std;


void findMinMax(int a,int b,int c,int &minVal,int &maxVal);


int main() {

	int num ,num1,num2;

	cout<<"Enter three values here :"<<endl;
	cin>>num>>num1>>num2 ;

	int lo ;
	int hi ;

	findMinMax(num,num1,num2,lo,hi);

	cout<<"Min value is : "<<lo<<endl;
	cout<<"Max value is : "<<hi<<endl;

	return 0;
}


void findMinMax(int a,int b,int c,int &minVal,int &maxVal)
{
	minVal = a;
	maxVal = a;

		if (minVal > c)
		{
			minVal = c;
		}
		if (minVal > b)
		{
			minVal = b;
		}

		if (maxVal < c)
		{
			maxVal = c;
		}
		if (maxVal < b)
		{
			maxVal = b;
		}



}
