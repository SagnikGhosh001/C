#include<stdio.h>

int main()
{
int i, n,arr[10];
printf("please enter the term");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the eliment");
scanf("%d", &arr[i]);
}
for (i=0;i<=n;i++)
{
printf("%d", arr[i]);
}
    return 0;
}