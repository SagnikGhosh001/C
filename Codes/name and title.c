#include<stdio.h>
#include<string.h>
int main()
{
char str1[10],str2[10], str3[20];
int i, k=0, j;
    printf("please enter the name:-");
    scanf("%s", str1);
    printf("plase enter the surname:-");
    scanf("%s", str2);
    for(i=0;str2[i]!='\0';i++)
    {
    str3[k]=str2[i];
    k++;
    }
    
    for(j=0;str1[j]!='\0';j++)
    {
    str3[k]=str1[j];
    k++;
    }
    str3[k]='\0';
    
    printf("%s",str3);
    return 0;
}
