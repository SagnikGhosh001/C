//7
#include<stdio.h>
void main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			if(j<=i)
				printf("%c",i);
			else
				printf(" ");
		}
		printf("\n");
	}
}
