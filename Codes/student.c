#include<stdio.h>
struct student
{
char name[10];
int roll;
float marks;
};
int main()
{
int i;
struct student arr[10];
for(i=0;i<=5;i++)
{
printf("enter the name:");
scanf("%s",&arr[i].name);
printf("enter the roll:");
scanf("%d",&arr[i].roll);
printf("enter the marks:");
scanf("%f",&arr[i].marks);
printf("%s",arr[i].name);
printf("\n%d",arr[i].roll);
printf("\n%f",arr[i].marks);
}
}
    