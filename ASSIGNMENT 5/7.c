//7
#include<stdio.h>
int sum(int n1,int n2)
{
	return (n1+n2);
}
int sub(int n1,int n2)
{
	return (n1-n2);
}
int mul(int n1,int n2)
{
	return (n1*n2);
}
int div(int n1,int n2)
{
	return (n1/n2);
}
int rem(int n1,int n2)
{
	return (n1%n2);
}
void main()
{
	int n1,n2;
	printf("Enter the first number:-");
	scanf("%d",&n1);
	printf("Enter the second number:-");
	scanf("%d",&n2);
	printf("Sum is-%d\n",sum(n1,n2));
	printf("Sub is-%d\n",sub(n1,n2));
	printf("Mul is-%d\n",mul(n1,n2));
	printf("Div is-%d\n",div(n1,n2));
	printf("Rem is-%d",rem(n1,n2));
}
