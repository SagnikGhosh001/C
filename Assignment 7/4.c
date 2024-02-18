//4
#include<stdio.h>
void main()
{
	char str1[10],str2[10];
	int i,count=0,length;
	printf("Enter first string:-");
	scanf("%s",str1);
	printf("Enter second string:-");
	scanf("%s",str2);
	for(length=0;str1[length]!='\0';length++);
	for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
	{
		if(str1[i]==str2[i])
		{
			count++;
		}
	}
	if(count==length)
		printf("Both strings are same");
	else
		printf("Both strings are not same");
}
