#include<stdio.h>

int main()
{
float class, roll,total, marks,percentage,maths,division,physics, chem;
total=maths+physics+chem;
printf("please enter your class");
scanf("%f",&class);
printf("please enter your roll");
scanf("%f", &roll);
printf("please enter the marks of maths");
scanf("%f", &maths);
printf("please enter the marks of physics");
scanf("%f", &physics);
printf("please enter the marks of chem");
scanf("%f", &chem);
percentage=total/3;
if(percentage>=60)
printf("division--First");
else
printf("division--second");
return 0;
}
    