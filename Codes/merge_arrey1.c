#include<stdio.h>
void main()
{
	int arr1[10],arr2[10],arr3[20],i,j,n;
	printf("enter the term of array:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements in array:-");
		scanf("%d",&arr1[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("enter the elements in array:-");
		scanf("%d",&arr2[j]);
	}
	for(i=0;i<n;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<n;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	for(j=0;j<2*n;j++)
	{
		printf("%d",arr3[j]);
	}
}
