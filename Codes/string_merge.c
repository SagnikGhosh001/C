#include<stdio.h>
void main()
{
	char name[10],title[10],final[20];
	int i,j,k;
	printf("Enter the name:-");
	scanf("%s",name);
	printf("Enter the title:-");
	scanf("%s",title);
	for(i=0;name[i]!='\0';i++)
	{
		final[k]=name[i];
		k++;
	}
	final[i]='\0';
	for(j=0;title[j]!='\0';j++)
	{
		final[k]=title[j];
		k++;
	}
	printf("%s",final);
}
