//7
#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j,m,n,count=0;
	printf("enter the size of row and column:-");
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
			if (i == j && a[i][j] != 1)
			{
				count = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				count = -1;
				break;
			}	
		}
	}
	if(count==0)
		printf("It is identity matrix");	
	else
		printf("It is not identity matrix");	
}

