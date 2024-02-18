#include<stdio.h>

int main()
{
char ch;
printf("please enter the character ");
scanf("%c",&ch);
if((ch>='a' && ch <='z')||(ch>='A' && ch<='Z'))
printf("it's alphabet"); 
else if(ch>='0' && ch<='9')
printf("it's a digit");
else
printf("it's a special character");
return 0;
}
    