#include<stdio.h>
void main()
{
	int arr1[10],arr2[10],n1,i,n2,j,arr3[10];
	printf("enter the number of terms in first array:-");
	scanf("%d",&n1);
	printf("enter the number of terms in 2nd array:-");
	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	{
		printf("enter the first arrey element:-");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("enter the 2nd arrey element:-");
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<n1;i++)
	{
		arr3[i]=arr1[i];
	}
	j=i;
	for(i=0;i<n2;i++)
	{
		arr3[j]=arr2[i];
		j++;
	}
	for(i=0;i<j;i++)
	{
    	printf("%d",arr3[i]);
	}
}
