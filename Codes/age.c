#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a;
	printf("please enter your age:-");
	scanf("%d",&a);
	if(a>=0 && a<18)
	printf("your are under age");
	else if(a>=18 && a<50 )
	printf("you are allowed to go in");
	else
	printf("you are not allowed");
}
