#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("enter the length of the rectangle:-");
	scanf("%f",&a);
	printf("enter the width of the rectangle:-");
	scanf("%f",&b);
	c=2*(a+b);
	d=a*b;
	printf("the perimeter of rectangle is %.2f\n",c);
	printf("the area of rectangle is %.2f",d);
}
