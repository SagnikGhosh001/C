#include<stdio.h>

int main()
{
int i, n,arr[10],even=0,odd=0;
printf("please enter the term");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the eliment");
scanf("%d", &arr[i]);
}
for (i=0;i<n;i++)
{
if(arr[i]%2==0)
even ++;
else
odd++;
}
printf("number of odd %d", odd);
printf("number of even %d", even);
    return 0;
}

    
