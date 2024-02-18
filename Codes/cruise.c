#include<stdio.h>
void main()
{
	int i,n,e[5],l[5],sum=0,temp1,temp2,temp3;
	printf("Enter the no of element:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the entry:-");
		scanf("%d",&e[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("Enter the exit:-");
	scanf("%d",&l[i]);
	}
	for(i=0;i<n;i++){
		printf("entry %d\n",e[i]);	
	}
	for(i=0;i<n;i++){
	printf("exit %d\n",l[i]);
	}
	temp1=e[0]-l[0];
	for(i=0;i<n;i++)
	{
		sum=e[i]-l[i]+sum;
		if(sum>temp1)
			temp2=sum;
	}
	printf("%d",temp2);
}
