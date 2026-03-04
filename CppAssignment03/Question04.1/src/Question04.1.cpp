
#include <iostream>
using namespace std;

int main() {
	int n = 5;
		int *arr = (int*) malloc(n * sizeof(int));

		 if (arr == NULL)
		    {
		        cout << "Memory allocation failed!" << endl;
		        return 1;
		    }

		cout<<"Enter arr element here"<<endl;
		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		for (int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}

		free(arr);

		arr = NULL;
//		cout<<arr[0]<<endl;
	return 0;
}
