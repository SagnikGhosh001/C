#include<stdio.h>
//void add()
//{
//	int a,b;
//	printf("enter the first number:-");
//	scanf("%d",&a);
//	printf("enter the second number:-");
//	scanf("%d",&b);
//	printf("%d",a+b);
//}
int add(int x,int y)
{
	return x+y;
}
void main()
{
	int a,b,sum;
	printf("enter the first number:-");
	scanf("%d",&a);
	printf("enter the second number:-");
	scanf("%d",&b);
//	sum=add(a,b);
//	printf("%d",sum);
	printf("%d",add(a,b));
}
