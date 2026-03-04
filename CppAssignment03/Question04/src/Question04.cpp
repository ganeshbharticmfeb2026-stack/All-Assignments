
#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int *arr = new int[n];

	cout<<"Enter arr element here"<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for (int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}

	delete[] arr;

	return 0;
}
