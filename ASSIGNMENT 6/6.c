//6
#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j,m,n,count=0;
	printf("enter the size of row:-");
	scanf("%d",&n);
	printf("enter the size of coloumn:-");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the numbers:-");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==0)
				count++;
		}
	}
	if(count>(n*m/2))
		printf("It is sparse matrix");
	else
		printf("It is not sparse matrix");
}

