//5
#include<stdio.h>
void prime(int n)
{
	int j,i,count;
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==1)
		printf("%d ",i);
	}
}
void main()
{
	int n;
	printf("enter the range:-");
	scanf("%d",&n);	
	prime(n);
}
