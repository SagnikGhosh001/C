#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area,x;
	printf("enter the 1st side of the triangle:-");
	scanf("%f",&a);
	printf("enter the 2nd side of the triangle:-");
	scanf("%f",&b);
	printf("enter the 3rd side of the triangle:-");
	scanf("%f",&c);
	s=(a+b+c)/2;
	x=s*(s-a)*(s-b)*(s-c);
	area=sqrt(x);
	printf("by using heron formula the area of the triangle is %f",area);
	
}
