#include<stdio.h>
void main()
{
	int i=1,fact=1,n;
	printf("enter the number:-");
	scanf("%d",&n);
	for(i>=1;i<=n;i++)
	{
	fact=fact*i;
    }
    printf("%d",fact);
}
