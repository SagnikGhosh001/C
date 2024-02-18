#include<stdio.h>
void main()
{
	int arr[10],n,i,sum=0;
	printf("enter the number of terms:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:-");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d",sum);	
}
