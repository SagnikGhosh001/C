#include<stdio.h>
#include<math.h>
int main()
{
int n,count=0, i, rem, amst=0,i1;
printf("enter the value:");
scanf("%d", &n);
i1=n;
i=n;
for(;n!=0;)
{
n=n/10;
count++;
}
for(;i>0;)
{
rem=i%10;
amst=amst+pow(rem, count);
i=i/10;
}
if(amst==i1)
printf("it's an Armstrong number");
else
printf("it's not an Armstrong number");
return 0;
}