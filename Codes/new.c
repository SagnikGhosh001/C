#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int range,x,i=1;
float sum=0.0,y;
printf("enter the range:-");
scanf("%d",&range);
while(i<=range)
 {
	x=pow(i,2);
	y=1/(float)x;
    sum=sum+y;
    i=i+1;
 }
    printf("%d \n",x);
    printf("%f \n",y);
	printf("the sum is %f",sum);
}
