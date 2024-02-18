//1
#include<stdio.h>
void cube(int n)
{
	printf("%d",(n*n*n));
}
void main()
{
	int n;
	printf("enter the number:-");
	scanf("%d",&n);
	cube(n);
}
