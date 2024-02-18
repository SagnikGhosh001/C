//multipication of digit
#include<stdio.h>
void main()
{
	int n,mul=1,rem;
	printf("enter the number:-");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		mul=rem*mul;
		n=n/10;
	}
	printf("the multipication of digit is:-%d",mul);
}
