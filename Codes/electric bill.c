#include<stdio.h>

int main()
{
int cusid;
float unitcons,charge,charge1, charge2;
printf("please enter the customer id:");
scanf("%d",&cusid);
printf("please enter the unit consumed by user:");
scanf("%f", &unitcons);
if (unitcons<=199)
{
charge=unitcons*1.20;
if(charge>400)
{
charge1=charge+charge*0.15;
printf("your amount of bill is %f", charge1);
}
else
if(charge1<100)
{
charge2=100;
printf("your amount of bill is %f", charge2);
}
else
printf("your amount of bill is %f", charge1);
}
else if(unitcons>=200&&unitcons<400)
{
charge=unitcons*1.5;
if(charge>400)
{
charge1=charge+charge*0.15;
printf("your amount of bill is %f", charge1);
}
else
printf("your amount of bill is %f", charge);
}
else if(unitcons>=400&&unitcons<600)
{
charge=unitcons*1.8;
if(charge>400)
{
charge1=charge+charge*0.15;
printf("your amount of bill is %f", charge1);
}
else
printf("your amount of bill is %f", charge);
}
else if(unitcons>=600)
{
charge=unitcons*2;
if(charge>400)
{
charge1=charge+charge*0.15;
printf("your amount of bill is %f", charge1);
}
else
printf("your amount of bill is %f", charge);
}
return 0;
}    