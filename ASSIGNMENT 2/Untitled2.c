#include<stdio.h>
void main()
{
	float bill, units,bill1;

	printf("Enter the units consumed=");
	scanf("%f",&units);
	if(units<=50)
		bill=units*5.50;
	else if(units<=100 && units>50)
		bill=50*5.50+(units-50)*6.00;
	else if(units<=250 && units>150)
		bill=50*5.50+100*6.00+(units-150)*6.50;
	else if(units>250)
		bill=50*5.50+100*6.00+100*6.50+(units-250)*7.00;
	else
		printf("Please enter valid consumed units...");
	bill1=bill+0.2*bill;
	printf("Electricity Bill=%.2f Rupees",bill1);
}
