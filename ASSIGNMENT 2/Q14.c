//14
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the first side:-");
	scanf("%d",&a);
	printf("Enter the second side:-");
	scanf("%d",&b);
	printf("Enter the third side:-");
	scanf("%d",&c);
	if(b+c>a && a+c>b && a+b>c)
	printf("This is a triangle");
	else
	printf("This is not a triangle");
}
