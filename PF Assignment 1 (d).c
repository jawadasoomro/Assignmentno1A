#include<stdio.h>


int main()
{
	float fahrenheit;
	float celsius;
	printf("Enter temperature in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("Temperature in celsius:%.2f\n");
	return 0;
}