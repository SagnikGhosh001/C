#include<stdio.h>
int wd()
{
 float x=20000.00,y,t;
 printf("enter the value of ammount:");
 scanf("%f", &y);
 if(y<=x)
 {
 t=x-y;
 printf("your remaining ammount is %f:", t);
 }
 else
 {
 printf("you don't have that much amount, please check your input");
 }
 }
int dep()
 {
 float x=20000.00,y;
 printf("enter the value of ammount:");
 scanf("%f", &y);
 printf("your balance is %f:",x+y);
 }
 int main()
 {
 int bank;
 printf("please choose 1.withdrawal 2.deposite");
 scanf("%d", &bank);
 switch (bank)
 {
 case 1:
 wd();
 break;
 case 2:
 dep();
 break;
 }
 }