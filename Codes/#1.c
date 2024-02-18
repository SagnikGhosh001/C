#include<stdio.h>
#include<string.h>
void main()
{
	char inp[20],out1[20],out2[20];
	int i,k=0,j=0;
	printf("Please enter the string:-");
	scanf("%s",inp);
	for(i=0;inp[i]!='\0';i++)
	{
		if(inp[i]=='#')
			out1[k++]=inp[i];
		else
			out2[j++]=inp[i];
	}
	out1[k]='\0';
	out2[j]='\0';
	printf("%s",strcat(out1,out2));
}
