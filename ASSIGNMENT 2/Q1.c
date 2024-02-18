//1
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the value of a:-");
	scanf("%d",&a);
	printf("Enter the value of b:-");
	scanf("%d",&b);
	printf("Before swap a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter swap a=%d and b=%d",a,b);
}
