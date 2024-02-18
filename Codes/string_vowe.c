#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int vowcount=0,concount=0,numcount=0,i;
	printf("Enter the  string:-");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U')
		{
			vowcount++;
			printf("Vowel: %c\n",str[i]);
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			numcount++;
			printf("Number: %d\n",str[i]);
		}
		else
		{
			concount++;
			printf("consonant: %c\n",str[i]);
		}
	}
	printf("Total no of vowel is: %d\n",vowcount);
	printf("Total no of consonant is: %d\n",concount);
	printf("Total no of number is: %d\n",numcount);
}
