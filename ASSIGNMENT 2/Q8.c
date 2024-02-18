//8
# include <stdio.h>
void main()
{
    int year;
    printf("Enter a Year:-");
    scanf("%d",&year);
    if (((year % 4== 0) && (year % 100!= 0)) || (year % 400 == 0))
       printf("The given year is 'Leap Year'");
    else
        printf("The given year is 'Not Leap Year'");
}
