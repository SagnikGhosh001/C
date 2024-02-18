#include<stdio.h>
void main()
{
int rem,num, pal=0,n;
printf("enter the digit:");
scanf("%d", &num);
n=num;
while(num>0)
{
rem=num%10;
pal=pal*10+rem;
num=num/10;
}
if(pal==n)
printf("it's a palindrome");
else
printf("it's not palindrome");
}
