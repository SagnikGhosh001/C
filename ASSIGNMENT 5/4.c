//4
#include<stdio.h>
#include<math.h>
void amst(int num)
{
	int count=0,n1,rem,amst=0,n2;
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
	printf("it's an Armstrong number\n");
	else
	printf("it's not an Armstrong number\n");
}
void prime(num)
{
	int i,count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
	}
	if(count==2)
	printf("it is prime number");
	else
	printf("it is not prime number");
}
void main()
{
	int num;
	printf("enter the value:-");
	scanf("%d", &num);
	amst(num);
	prime(num);
}
