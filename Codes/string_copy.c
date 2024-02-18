#include<stdio.h>
#include<string.h>
void main()
{
	char str[10],copy[10];
	int i;
	gets(str);
	for(i=0;str[i]!='\0';i++)
		copy[i]=str[i];
	str[i]='\0';
	puts(copy);
}
