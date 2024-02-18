#include<stdio.h>
#include <string.h>

int main()
{
   char str[20];
int k, count=0;
printf("enter the string ");
gets(str);
for(k=0;str[k]!='\0';k++)
{
if(str[k]=='a'||str[k]=='e'||str[k]=='i'||str[k]=='o'||str[k]=='u')
count++;
}
printf("vowel=%d", count);
}
