#include<stdio.h>
void main()
{
int i, n,arr[10];
printf("please enter the term:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the eliment:");
scanf("%d", &arr[i]);
}
for (i=n-1;i>=0;i--)
{
printf("%d", arr[i]);
}
}
