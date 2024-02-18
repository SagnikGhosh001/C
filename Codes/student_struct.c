#include<stdio.h>
struct student
{
char name[10];
int id;
float marks;
};
void main()
{
int i,n;
struct student arr[10];
printf("enter total no of student:-");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the name:-");
scanf("%s",&arr[i].name);
printf("enter the id:-");
scanf("%d",&arr[i].id);
printf("enter the marks:-");
scanf("%f",&arr[i].marks);
printf("%d student name is:-%s",i+1,arr[i].name);
printf("\n%d  student id is:-%d",i+1,arr[i].id);
printf("\n%d student mark is:-%f",i+1,arr[i].marks);
}
}
    
