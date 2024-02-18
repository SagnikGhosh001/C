//6
#include<stdio.h>
void main()
{
	char str[10];
	int alphcount=0,specount=0,numcount=0,i;
	printf("Enter the  string:-");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
			alphcount++;
		else if(str[i]>='0' && str[i]<='9')
			numcount++;
		else
			specount++;
	}
	printf("Total no of alphabet is: %d\n",alphcount);
	printf("Total no of special character is: %d\n",specount);
	printf("Total no of number is: %d\n",numcount);
}
