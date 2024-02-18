//10
#include<stdio.h>
void main()
{
	char str[100];
	int vowcount=0,concount=0,spacount=0,i;
	printf("Enter the  string:-");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O'|| str[i]=='U')
			vowcount++;
		else if(str[i]==' ')
			spacount++;
		else if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
			concount++;
	}
	printf("Total no of vowel is: %d\n",vowcount);
	printf("Total no of consonant is: %d\n",concount);
	printf("Total no of spaces is: %d\n",spacount);
}
