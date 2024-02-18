#include<stdio.h>

int main()
{
int temp;
printf("please enter the value of Temperature in centigrade");
scanf("%d",&temp);
if(temp<0)
printf("it's freezing weather"); 
else if(temp<10)
printf("it's very cold whether");
else if(temp<20)
printf("it's cold weather");
else if(temp<30)
printf("it's normal temperature");
else if(temp<40)
printf("it's hot weather");
else
printf("it's very hot weather");
return 0;
}