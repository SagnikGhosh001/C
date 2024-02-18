//8
#include<stdio.h>
void main()
{
	int arr1[10],arr2[10],arr3[20],n1,n2,i,j=0,k,temp;
	printf("enter the number of terms of first array:-");
	scanf("%d",&n1);
	printf("enter the number of terms of 2nd array:-");
	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	{
		printf("enter the element of first array:-");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("enter the elements 2nd array:-");
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<n1;i++)
	{
		arr3[j]=arr1[i];
		j++;
	}
	for(i=0;i<n2;i++)
	{
		arr3[j]=arr2[i];
		j++;
	}
	for(i=0;i<j-1;i++)
	{
		for(k=i+1;k<j;k++)
		{
			if(arr3[i]<arr3[k])
			{
				temp=arr3[i];
				arr3[i]=arr3[k];
				arr3[k]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d\t",arr3[i]);
	}
}
