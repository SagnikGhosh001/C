//8
#include<stdio.h>
void binary(int n)
{
	int rem,bin=0,n1,f=1;
	n1=n;
	while(n!=0)
	{
		rem=n%2;
		bin=bin+rem*f;
		f=f*10;
		n=n/2;
	}
	printf("%d in binary is %d",n1,bin);
}
void main()
{
	int n;
	printf("Enter the number:-");
	scanf("%d",&n);
	binary(n);
}
