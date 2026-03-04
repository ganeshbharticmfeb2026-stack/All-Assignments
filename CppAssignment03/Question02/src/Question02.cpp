#include <iostream>
using namespace std;


void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swap by Value: a = " << a << " b = " << b << endl;
}


void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Swap by Address: a = " << *a << " b = " << *b << endl;
}


void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swap by Reference: a = " << a << " b = " << b << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << "Original: a = " << a << " b = " << b << endl;

    swapByValue(a, b);
//    cout << "After swapByValue: a = " << a << " b = " << b << endl;

    swapByAddress(&a, &b);
//    cout << "After swapByAddress: a = " << a << " b = " << b << endl;

    swapByReference(a, b);
//    cout << "After swapByReference: a = " << a << " b = " << b << endl;

    return 0;
}
