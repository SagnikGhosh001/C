//3
#include<stdio.h>
void main()
{
	char str1[10],str2[10],copy[20];
	int i,j=0;
	printf("Enter first string:-");
	scanf("%s",str1);
	printf("Enter second string:-");
	scanf("%s",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		copy[j]=str1[i];
		j++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		copy[j]=str2[i];
		j++;
	}
	copy[j]='\0';
	printf("The merge is:-%s",copy);
}
