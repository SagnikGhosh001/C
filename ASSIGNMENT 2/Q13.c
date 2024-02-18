//13
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the first angle:-");
	scanf("%d",&a);
	printf("Enter the second angle:-");
	scanf("%d",&b);
	printf("Enter the third angle:-");
	scanf("%d",&c);
	if(a+b+c==180)
	printf("This is a triangle");
	else
	printf("This is not a triangle");
}
