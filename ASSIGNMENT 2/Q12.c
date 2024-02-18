//12
#include<stdio.h>
void main()
{
	int i,a,b;
	printf("Enter the value of a:-");
	scanf("%d",&a);
	printf("Enter the value of b:-");
	scanf("%d",&b);
	for(i=a;i<=b;i=i+1)
	{
	if(i%2!=0)
	printf("%d",i);
	else
	printf(" ");
    }
}
