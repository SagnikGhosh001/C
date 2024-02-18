#include<stdio.h>
void main()
{
	float a,b,c,d,e,f,X;
	printf("enter the value of a:-");
	scanf("%f",&a);
	printf("enter the value of b:-");
	scanf("%f",&b);
	printf("enter the value of c:-");
	scanf("%f",&c);
	printf("enter the value of d:-");
	scanf("%f",&d);
	printf("enter the value of e:-");
	scanf("%f",&e);
	printf("enter the value of f:-");
	scanf("%f",&f);
	X=a+b*(c/d)*e-f;
	printf("the value of X is %.2f",X);
}
