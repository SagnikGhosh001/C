//16
#include<stdio.h>
void main()
{
	int i,n,exp,power=1;
	printf("enter the base:-");
	scanf("%d",&n);
	printf("enter the exponent:-");
	scanf("%d",&exp);
	for(i=1;i<=exp;i++)
	{
		power=power*n;
	}
	printf("The ans is:-%d",power);
}
