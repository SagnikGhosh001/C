#include<stdio.h>
void main()
{
int rem, sum=0,num;
printf("enter the digit:");
scanf("%d", &num);
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("sum %d", sum);
}
