#include<stdio.h>
void main()
{
	int n,first,last,sum;
	printf("enter the number:-");
	scanf("%d",&n);
	last=n%10;
	printf("the last digit is:-%d \n",last);
	/*for*/while(n>=10)
	{
		n=n/10;
		first=n;
	}
	printf("the first digit is:-%d \n",first);
	sum=first+last;
	printf("the sum of first and last digit is:-%d",sum);
}
