//18
#include<stdio.h>
void main()
{
	int n,fact=1;
	printf("enter the number:-");
	scanf("%d",&n);
	while(n!=0)
	{
		fact=fact*n;
		n--;
	}
	printf("the Factorial is:-%d",fact);
}
