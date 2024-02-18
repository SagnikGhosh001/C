//10
#include<stdio.h>
void main()
{
	char i,j;
	for(i='a';i<='e';i++)
	{
		for(j='a';j<='e';j++)
		{
			if(j<=i)
				printf("%c",j);
			else
				printf(" ");
		}
		printf("\n");
	}
}
