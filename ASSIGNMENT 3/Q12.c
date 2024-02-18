//12
#include<stdio.h>
#include<math.h>
void main()
{
	int n,first,last,swap,power,count;
	printf("enter the number:-");
	scanf("%d",&n);
	printf("before swap=%d\n",n);
	count=log10(n);
	power=pow(10,count);
	first=n/power;
	n=n%power;
	last=n%10;
	n=n/10;
	swap=last*power+n*10+first;
	printf("After swap=%d",swap);
}
