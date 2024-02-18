//23
#include<stdio.h>
void main()
{
	int i,num,n,sum=0;
	printf("enter the number:-");
	scanf("%d",&num);
	n=num;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(n==sum)
	printf("perfect number");
	else
	printf("not a perfect number");
}
