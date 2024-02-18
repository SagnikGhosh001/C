#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i;
    printf("please enter the string:-");
    scanf("%s", str);
    for(i=0;str[i]!=0;i++);
    printf("%d", i);
    return 0;
}