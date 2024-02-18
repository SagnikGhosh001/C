#include<stdio.h>
struct person
{
int id;
char name[10];
float marks;
};
void main()
{
struct person std;
printf("enter the id:-");
scanf("%d",& std.id);
printf("enter the name:-");
scanf("%s",&std.name);
printf("enter the marks:-");
scanf("%f",&std.marks);
printf("%d",std.id);
printf("\n%s",std.name);
printf("\n%.2f", std.marks);
}
