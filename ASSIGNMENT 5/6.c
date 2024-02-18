//6
#include <stdio.h>
int isPerfect(int start, int end)
{
    int i,j,sum;
    for(i=start;i<=end;i++)
    {
    	sum = 0;
    	for(j=1;j<i;j++)
    	{
        	if(i % j == 0)
            	sum = sum+j;
    	}
    	if(sum==i)
    		printf(" %d ",i);
    }
}
void main()
{
    int start, end;
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end); 
    printf("All perfect numbers between %d to %d are: \n", start, end);
    isPerfect(start, end);
}
