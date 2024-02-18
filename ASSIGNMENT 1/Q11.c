#include<stdio.h>
void main()
{
	float c,f;
	printf("enter the temperature in fahrenheit:-");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("the temperture in celsius is %.2f",c);
	
}
