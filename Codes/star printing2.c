#include<stdio.h>
void main()
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			printf("%d",5-i+j);
			else
			printf(" ");
		}
		printf("\n");
	}
}