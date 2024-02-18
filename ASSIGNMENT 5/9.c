//9
#include <stdio.h>
int fact(int n)
{
	int i=1,fact=1;
	for(i>=1;i<=n;i++)
	{
	fact=fact*i;
    }
    return fact;
}
void main()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;    
    printf("The sum of the series is : %d",sum);
}
