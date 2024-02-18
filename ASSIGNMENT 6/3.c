//3
#include<stdio.h>
void main()
{
	int i,j,k,n,m,arr1[10][10],arr2[10][10],arr3[10][10];
	printf("enter the size of row:-");
	scanf("%d",&n);
	printf("enter the size of coloumn:-");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the 1st arr numbers:-");
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter the 2nd arr numbers:-");
			scanf(" %d",&arr2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr3[i][j]=0;
			for(k=0;k<m;k++)
			{
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j]; 
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %d",arr3[i][j]);
		}
		printf("\n");
	}
}
