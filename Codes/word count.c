#include<stdio.h>
#include <string.h>

int main()
{
   char str[20];
int i, word=1;
printf("enter the string ");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' '||str[i]=="\n")
word++;
}
printf("%d", word);
}