#include<stdio.h>

int main()
{
int i, n,arr[10],find, search;
printf("please enter the term:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the eliment:");
scanf("%d",&arr[i]);
}
printf("please enter the number to search:");
scanf("%d",&search);

for(i=0;i<=n;i++)
{
if(arr[i]==search)
{
printf("your number is in element no:%d",i+1);
break;
}
}
if(i!=n)
printf("element not found");
    return 0;
   
}
