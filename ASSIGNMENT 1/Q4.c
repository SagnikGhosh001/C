#include<stdio.h>
void main ()
{
	int r;
	float m1,m2,m3,avg;
	printf("ENTER THE ROLL NO OF STUDENT:-");
	scanf("%d",&r);
	printf("ENTER 1ST SUBJECT MARKS:-");
	scanf("%f",&m1);
	printf("ENTER 2ND SUBJECT MARKS:-");
	scanf("%f",&m2);
	printf("ENTER 3RD SUBJECT MARKS:-");
	scanf("%f",&m3);
	avg=(m1+m2+m3)/3;
	printf("ROLL NO:-%d GOT AVERAGE OF MARKS:-%.2f",r,avg);
}
