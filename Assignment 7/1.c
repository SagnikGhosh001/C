//1
#include<stdio.h>
void main()
{
	char str[10];
	int i;
	printf("Enter a string:-");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	printf("The length is %d",i);
}
