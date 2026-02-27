/*
 Q7. const Constant in Functions
Write two C++ functions that use a const float PI = 3.14159f declared at the global scope:

float circleArea(float radius) — returns area of a circle.
float circlePerimeter(float radius) — returns circumference.
In main(), call both with radius = 7.0 and print results to 4 decimal places.
Additionally, add this line inside main() and describe what happens when you compile:
PI = 3.0f; // attempt to modify const
Do not delete the line — comment it out after observing the error and write the compiler error message as a
comment beside it.

 */

#include <iostream>
#include <iomanip>
using namespace std;

const float pi = 3.14159f;

float circleArea(float radius)
{
	return pi * radius * radius;
}


float circlePerimeter(float radius)
{
	return 2 * pi * radius;
}

int main() {
	float radius = 7.0f;

	cout << fixed << setprecision(4);

	cout<<"Area of circle "<<circleArea(radius)<<endl;
	cout<<"Area of circle perimeter "<<circlePerimeter(radius)<<endl;
	return 0;

	//Error: assignment of read-only variable 'PI'
}
