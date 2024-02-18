#include<stdio.h>
#include<math.h>
int main()
{
float a, b, c,discriminant,r1,r2, real, imaginary;
printf("please enter the value of a coefficient of x^2:-");
scanf("%f",&a);
printf("please enter the value of b coefficient of x:-");
scanf("%f",&b);
printf("please enter the value of c coefficient of x^0:-");
scanf("%f",&c);
discriminant=((b*b)-(4*a*c));
if(discriminant==0)
{
r1=r2=(-b)/(2*a);
printf("value of first and second root is same and the value is%.2f",r1);
}
else if(discriminant>0)
{
r1=(((-b)/(2*a))+((sqrt(discriminant))/(2*a)));
r2=(((-b)/(2*a))-((sqrt(discriminant))/(2*a)));
printf("value of first root is %.2f and second root is %.2f", r1,r2);
}
else
{
real=((-b)/(2*a));
imaginary=((sqrt(-discriminant))/(2*a));
printf("value of first root is %.2f+%.2fi and second root is %.2f-%.2fi", real,imaginary,real, imaginary);
}
return 0;
}
