//1
#include<stdio.h>
void main()
{
	int arr[10];
	int i,n,j=0,temp;
	printf("enter the number of terms:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:-");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d\t",arr[i]);
	}
}
