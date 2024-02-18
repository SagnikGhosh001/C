//7
#include<stdio.h>
void main()
{
	char str[50];
	int count=1,i;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
			count++;
	}
	printf("Total word is %d",count);
}
