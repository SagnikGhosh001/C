#include<stdio.h>
int main()
{
int i=1, sum=0,n;
printf("enter the value of n:");
scanf("%d", &n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("%d", sum);
return 0;
}