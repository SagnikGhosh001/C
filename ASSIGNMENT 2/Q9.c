//9
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value of a:-");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	printf("this number is divisible by 5 and 11");
	else
	printf("this number is not divisible by 5 and 11");
}
