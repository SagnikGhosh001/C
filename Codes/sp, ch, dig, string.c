#include<stdio.h>
#include <string.h>
int main()
{
   char str[20];
int k, sp=0,num=0,ch=0;
printf("enter the string ");
gets(str);
for(k=0;str[k]!='\0';k++)
{
if((str[k]>='a'&&str[k]<='z')||(str[k]>='A'&&str[k]<='Z'))
ch++;
else if(str[k]>='0'&&str[k]<='9')
num++;
else
sp++;
}
printf("no of char =%d\n", ch);
printf("no of digitis=%d\n",num);
printf("special character =%d", sp);
}