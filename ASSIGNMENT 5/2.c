//2
#include<stdio.h>
void max(int a, int b)
{
	if(a>b)
		printf("max is %d\n",a);
	else
		printf("max is %d\n",b);
}
void min(int a, int b)
{
	if(a<b)
		printf("min is %d",a);
	else
		printf("min is %d",b);
}
void main()
{
	int a,b;
	printf("Enter the first number:-");
	scanf("%d",&a);
	printf("Enter the second number:-");
	scanf("%d",&b);
	max(a,b);
	min(a,b);
}
