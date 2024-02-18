#include<stdio.h>
#include<string.h>
int main()
{
char str1[10], str2[10], str3[10];
int i,k=0,j=0;
    printf("please enter the string:-");
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
    if(str1[i]=='#') 
    str2[j++]=str1[i];  
    else   
    str3[k++]=str1[i];
    }
    printf("%s",strcat(str2,str3));
    return 0;
}    