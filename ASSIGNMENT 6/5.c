//5
#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j,n,sum=0;
	printf("enter the size of row and coloumn:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the numbers:-");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				sum=sum+a[i][j];
		}
	}
	printf("the sum of right diagonals is %d",sum);
}

