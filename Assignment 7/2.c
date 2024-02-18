//2
#include<stdio.h>
void main()
{
	char str[10],copy[10];
	int i;
	printf("Enter a string:-");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		copy[i]=str[i];
	copy[i]='\0';
	printf("The copy is:-%s",copy);
}
