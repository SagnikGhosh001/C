#include<stdio.h>
void main()
{
	int arr[10];
	int i,n,j=0,max,min;
	printf("enter the number of terms:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:-");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
		else if(min>=arr[i])
		min=arr[i];
	}
		printf("maximum:-%d\n",max);
		printf("minimum:-%d",min);
}
