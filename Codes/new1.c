#include<stdio.h>
void main()
{
float n,i=1,sum=0,p;
printf("enter the range:-");
scanf("%f",&n);
while(i<=n)
{
p=pow(i,2);
sum=((sum*p+1)/p);
i++;
}
printf("%f",sum);
}
