#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int i;
	printf("enter the string: ");
	scanf("%s",str);
//	for(i=0;str[i]!='\0';i++);
//	printf("%d",i);
	i=strlen(str);
	printf("%d",i);
}
