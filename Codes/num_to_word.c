//number to word
#include<stdio.h>
void main()
{
	int rev=0,n,rem;
	printf("enter the number:-");
	scanf("%d",&n);
	//store the reverse number in rev if not store then the  output is in opposite order
	while(n!=0)
	{
		rev=(rev*10)+(n%10);
		n=n/10;
	}
		printf("reversed of the number is:-%d \n",rev);
	while(rev!=0)
	{
		switch(rev%10)
		{
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;							
		}
		rev=rev/10;
	}
}
