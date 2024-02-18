//9
#include<stdio.h>
void main()
{
	char str[50],copy[50];
	int j,i,count=0;
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
	i=0;
	while(str[i]!='\0'&& copy[i]!='\0')
	{
		if(str[i]!=copy[i])
		{
			count=-1;
			break;
		}
		i++;
	}
	if(count==0)
		printf("pallindrome");
	else
		printf("not pallindrome");
}
