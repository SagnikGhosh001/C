#include<stdio.h>
void main()
{
	int rem,num,rev=0;
	printf("enter the digit:");
	scanf("%d", &num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("%d\n", rev);
}
