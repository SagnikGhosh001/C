//8
#include<stdio.h>
void main()
{
	char str[50],copy[50];
	int j,i;
	printf("Enter the string:-");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
		copy[i]=str[i];
	for(j=0;str[j]!='\0';j++);
	j=j-1;
	for(i=0;str[i]!='\0';i++)
	{
		str[i]=copy[j];
		j--;
	}
	str[i]='\0';
	printf("reverse is:-%s",str);
}
