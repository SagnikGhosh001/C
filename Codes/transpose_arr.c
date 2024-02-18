#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j,m,n;
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
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}
