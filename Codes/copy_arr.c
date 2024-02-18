#include<stdio.h>
void main()
{
	int arr1[10],arr2[10],n,i;
	printf("enter the number of terms:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the arrey element:-");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
	 arr2[i]=arr1[i];
	printf(" %d",arr2[i]);
	}
}
