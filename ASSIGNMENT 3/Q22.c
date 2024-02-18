//22
#include<stdio.h>
#include<math.h>
void main()
{
	int num,count=0,n1,rem,amst=0,n2;
	printf("enter the value:-");
	scanf("%d", &num);
	n1=num;
	n2=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	while(n1!=0)
	{
		rem=n1%10;
		amst=amst+pow(rem, count);
		n1=n1/10;
	}
	if(amst==n2)
	printf("it's an Armstrong number");
	else
	printf("it's not an Armstrong number");
}
