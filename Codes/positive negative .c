#include<stdio.h>

int main()
{
int i, n,arr[10],positive=0,negative=0;
printf("please enter the term:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the eliment:");
scanf("%d", &arr[i]);
}
for (i=0;i<n;i++)
{
if(arr[i]>=0)
positive ++;
else
negative ++;
}
printf("number of positive: %d", positive );

printf("number of negative: %d", negative );
    return 0;
}

    