#include<stdio.h>
#include<string.h>
void main()
{
	char name[10],dept[10],semsuff[2];
	int roll,sem;
	printf("ENTER YOUR FIRST NAME:-");
	gets(name);
	printf("ENTER YOUR ROLL NO:-");
	scanf("%d",&roll);
	printf("ENTER YOUR DEPARTMENT:-");
	scanf("%s",dept);
	printf("ENTER YOUR SEMESTER:-");
	scanf("%d%s",&sem,semsuff);
	printf("YOUR NAME IS %s \n",name);
	printf("YOUR ROLL NO IS %d \n",roll);
	printf("YOUR DEPARTMENT IS %s \n",dept);
	printf("YOUR SEMESTER IS %d%s",sem,semsuff);
}
