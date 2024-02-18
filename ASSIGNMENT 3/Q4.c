//4
#include<stdio.h>
void main()
{
	int n;
	printf("enter a number:-");
	scanf("%d",&n);
	switch(n%2)
	{
		case 0:
			printf("this is even number");
			break;
		case 1:
			printf("this is odd number");
			break;
	}
}
