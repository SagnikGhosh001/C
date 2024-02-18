#include <stdio.h>
add()
{
	float a,b,c;
	printf("please enter the value of a:");
	scanf("%f",&a);
	printf("please enter the value of b:");
	scanf("%f",&b);
	c=a+b;
	printf("%f",c);
}
sub()
{
	float a,b,c;
	printf("please enter the value of a:");
	scanf("%f",&a);
	printf("please enter the value of b:");
	scanf("%f",&b);
	c=a-b;
	printf("%f",c);
}
mul()
{
	float a,b,c;
	printf("please enter the value of a:");
	scanf("%f",&a);
	printf("please enter the value of b:");
	scanf("%f",&b);
	c=a*b;
	printf("%f",c);
}
div()
{
	float a,b,c;
	printf("please enter the value of a:");
	scanf("%f",&a);
	printf("please enter the value of b:");
	scanf("%f",&b);
	c=a/b;
	printf("%f",c);
}
void main()
{
	int cal;
	printf("please choose operation \n1.Addition \n2.Substraction \n3.Multipication \n4.Division:-");
	scanf("%d",&cal);
	switch (cal)
	{
	case 1:
		add();
	    break;
	case 2:
		sub();
	    break;
	case 3:
		mul();
	    break;
	case 4:	
		div();
	    break;
    }
}
