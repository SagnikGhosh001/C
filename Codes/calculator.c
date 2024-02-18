#include<stdio.h>
int add()
{
int x, y;
printf("enter the value of x and y ");
scanf("%d%d", &x,&y);
printf("%d", x+y);
}
int sub()
{
int x, y;
printf("enter the value of x and y ");
scanf("%d%d", &x,&y);
printf("%d", x-y);
}
int mul()
{
int x, y;
printf("enter the value of x and y ");
scanf("%d%d", &x,&y);
printf("%d", x*y);
}
int div()
{
int x, y;
printf("enter the value of x and y ");
scanf("%d%d", &x,&y);
printf("%d", x/y);
}
int main()
{
 int cal;
 printf("enter the operation 1.sum 2.sub 3.mul 4.div,");
 scanf("%d", &cal);
  switch(cal)
  {
  case 1:
  add();
  break;
  case 2:
  sub();
  break;
  case 3:
  mul();
  break;
  case 4:
  div();
  break;
  }
  
return 0;
}

    