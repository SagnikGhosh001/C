//24
#include<stdio.h>
void main()
{
	int num,num1,sum=0,rem,fact,i;
	printf("enter the number");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
	rem=num%10;
	fact=1;
	i=1;
	while(i<=rem)
	{
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	num=num/10;
    }
	if(sum==num1)
	printf("this is a strong number");
	else
	printf("this is no a strong number");
}
