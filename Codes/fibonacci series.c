#include<stdio.h>
int main()
{
int n1=0,n2=1, sum, range;
sum=n1+n2;
printf("print the range");
scanf("%d",&range);
printf("Fibonaci series:- %d %d",n1,n2);
while(sum<range)
{
printf(" %d",sum);
n1=n2;
n2=sum;
sum=n1+n2;
}
return 0;
}
