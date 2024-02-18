#include<stdio.h>
#include<string.h>
int main()
{
char str1[10],str2[10];
    printf("enter the name:-");
    gets(str1);
    printf("enter the surname:-");
    gets(str2);
    printf("%s %s", str2,str1);
    return 0;
}
