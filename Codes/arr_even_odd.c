#include<stdio.h>
void main()
{
	int arr[10],n,i,even=0,odd=0;
	printf("enter the number of terms:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element:-");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		even++;
	    else
		odd++;
	}
	printf("even=%d \n",even);
	printf("odd=%d",odd);
}
