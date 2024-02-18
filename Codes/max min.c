#include<stdio.h>

int main()
{
int i, n,arr[10],max, min;
printf("please enter the term:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the eliment:");
scanf("%d", &arr[i]);
}
max=arr[0];
min=arr[0];
for (i=0;i<n;i++)
{
if(min>=arr[i])
min=arr[i];
else if (max<arr[i])
max=arr[i];
}
printf("maxinmum number is: %d", max );

printf("minimum number is: %d", min );
    return 0;
}

    