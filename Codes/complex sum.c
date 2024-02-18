#include<stdio.h>
struct complex
{
float real1;
float real2;
float ima1;
float ima2;
float sum1,sum2;
};
int main()
{
struct complex a;
printf("enter the real part:");
scanf("%f",&a.real1);
printf("enter the real part:");
scanf("%f",&a.real2);
printf("enter the imaginary part:");
scanf("%f",&a.ima1);
printf("enter the imaginary part:");
scanf("%f",&a.ima2);
a.sum1=a.real1+a.real2;
a.sum2=a.ima1+a.ima2;
printf("%f+%fi",a.sum1,a.sum2);
}