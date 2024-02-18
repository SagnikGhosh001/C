#include<stdio.h>
void main()
{
	int math,phy,chem,tot,maph;
	printf("please enter the marks in math:-");
	scanf("%d",&math);
	printf("please enter the marks in physics:-");
	scanf("%d",&phy);
	printf("please enter the marks in chemistry:-");
	scanf("%d",&chem);
	tot=math+phy+chem;
	maph=math+phy;
	if((math>=65 && phy>=55 && chem>=50 && tot>=190) || maph>=140)
	printf("you are eligible \ntotal marks in all subject is %d and total marks in math and physics is %d ",tot,maph);
	else
	printf("you are not eligible \ntotal marks in all subject is %d and total marks in math and physics is %d ",tot,maph);
}
