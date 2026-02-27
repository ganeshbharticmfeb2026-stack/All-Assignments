
#include <stdio.h>
#include <stdlib.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f) ;

int main() {

	float c = 25.9;
	float f = 30.9;

	printf("\nResult is celsius To Fahrenheit %f",celsiusToFahrenheit(c));
	printf("\nResult is fahrenheit To Celsius %f",fahrenheitToCelsius(f));


	return 0 ;
}


float celsiusToFahrenheit(float c)
{
	return  c * 9/5 + 32 ;
}
float fahrenheitToCelsius(float f)
{
	return (f -32 ) * 5/9 ;

}
