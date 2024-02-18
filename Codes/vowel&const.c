#include<stdio.h>

int main()
{
char alph;
printf("please enter the alphabet");
scanf("%c",&alph);
if (alph=='a'|| alph=='e'||alph=='i'||alph=='o'||alph=='u')
printf("it's vowel"); 
else
printf("it's a consonant");
return 0;
}
    