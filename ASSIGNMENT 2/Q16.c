//16
#include <stdio.h>
void main()
{
  int c, d, a, p, co, t;
  float per;
  printf("Enter Marks of C-Programming:-");
  scanf("%d", &c);
  printf("Enter Marks of Data-Structure:-");
  scanf("%d", &d);
  printf("Enter Marks of Algorithms:-");
  scanf("%d", &a);
  printf("Enter Marks of Python:-");
  scanf("%d", &p);
  printf("Enter Marks of Computer-System-Organization:-");
  scanf("%d", &co);
  t = a + c + d + p + co;
  printf("Total is:- %d\n", t);
  per = t / 5.00;
  printf("Percentage is :- %.2f\n", per);
  if (per >= 90)
    printf("Your Grade is 'A'");
  else if (per >= 80)
    printf("Your Grade is 'B'");
  else if (per >= 70)
    printf("Your Grade is 'C'");
  else if (per >= 60)
    printf("Your Grade is 'D'");
  else if (per >= 40)
    printf("Your Grade is 'E'");
  else
    printf("Your Grade is 'F'");
}

