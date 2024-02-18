#include<stdio.h>
void main()
{
	int i,j,n,m,arr[10][10];
	printf("enter the size of row:-");
	scanf("%d",&n);
	printf("enter the size of coloumn:-");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the numbers:-");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
}
