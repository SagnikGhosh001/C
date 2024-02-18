#include<stdio.h>
int main()
{
int n1=0,n2=1,sum,range,i;
printf("please enter the range:");
scanf("%d", &range);
printf("Fibonaci series:- %d %d",n1,n2);
for(i=2;i<range;i++)
{
sum=n1+n2;
printf(" %d",sum);
n1=n2;
n2=sum;
}
return 0;
}
