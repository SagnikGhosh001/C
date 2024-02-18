//4
# include <stdio.h>
void main ()
{
int a,b,c;
printf("Enter 1st Number:-");
scanf("%d",&a);

printf("Enter 2nd Number:-");
scanf("%d",&b);

printf("Enter 3rd Number:-");
scanf("%d",&c);

a>b?(c>a?printf("%d is maximum",c):printf("%d is maximum",a)):(b>c?printf("%d is maximum",b):printf("%d is maximum",c));
}
