#include<stdio.h>
void main()
{
	int n;
	printf("enter the number:-");
	scanf("%d",&n);
	while(n>=10)
	{
		n=n/10;
	}
	printf("the first digit is:-%d",n);
}
