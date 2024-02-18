#include <stdio.h>
void main()
{
float p, r, t, i;
printf("enter the principal:-");
scanf("%f",&p);
printf("enter the value of rate of interest:-");
scanf("%f",&r);
printf("enter the time:-");
scanf("%f", &t);
i=p*r*t/100;
printf("the interest is:-%f",i);
}
