//21
#include<stdio.h>
void main()
{
	int j,i,n,count;
	printf("enter the range:-");
	scanf("%d",&n);
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
