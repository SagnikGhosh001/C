#include<stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER THE VALUE OF a:-");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF b:-");
	scanf("%d",&b);
	c=a;
	printf("BEFORE SWAP THE VALUE OF a IS %d and VALUE OF b IS %d\n",a,b);
	a=b;
	b=c;
	printf("AFTER SWAP THE VALUE OF a IS %d and VALUE OF b IS %d ",a,b);
}
