//5
#include<stdio.h>
void main()
{
	char str[10];
	int i;
	printf("Enter a string:-");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
	 	if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
	}
	str[i]='\0';
	printf("The Uppercase is:-%s",str);
}
