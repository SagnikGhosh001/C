//3
#include<stdio.h>
#include<math.h>
int power(int base, int exp)
{
	int result=1;
	while(exp!=0)
	{
		result=result*base;
		exp--;
	}
	return result;
}
void main()
{
	int base,exp;
	printf("Enter the base:-");
	scanf("%d",&base);
	printf("Enter the exponent:-");
	scanf("%d",&exp);
	printf("the ans is %d",power(base,exp));
}
