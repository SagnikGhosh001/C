//11
#include<stdio.h>
void main()
{
int n,count=0;
printf("Enter the value:");
scanf("%d", &n);
while(n!=0)
{
n=n/10;
count++;
}
printf("The no of digit is %d", count);
}
