#include<stdio.h>
#include<math.h>
int main()
{
int n,count=0, i, rem, amst=0, i2,i3;
printf("enter the value:");
scanf("%d", &n);
i=n;
i3=i;
while(n!=0)
{
n=n/10;
count++;
}
while(i>0)
{
rem=i%10;
amst=amst+pow(rem,count);
i=i/10;
}
if(amst==i3)
printf("it's a Armstrong number");
else
printf("it's not a Armstrong number");
return 0;
}