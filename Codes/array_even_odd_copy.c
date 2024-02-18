#include<stdio.h>
void main()
{
	int arr[10],even[10],odd[10];
	int i,j=0,k=0,n;
	printf("enter the terms of array:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements of array");
		scanf("%d",&arr[i]);
		if (arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
		    k++;
		}
	}
	printf("ORGINAL ARRAY:-");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("EVEN ARRAY:-");
	for(i=0;i<j;i++)
	{
		printf("%d\t",even[i]);
	}
	printf("ODD ARRAY:-");
	for(i=0;i<k;i++)
	{
		printf("%d\t",odd[i]);
	}
}
//insert a new elemnts in perticular position given by user
//delet a elements from a array in perticular position
