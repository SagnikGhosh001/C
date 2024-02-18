//9
#include<stdio.h>
void main()
{
	int a[10][10];
	int i,j,m,n,per=0;
	printf("enter the total student:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter the number of sub%d of roll %d:-",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Roll No.\tSub1\tSub2\tSub3\tSub4\tSub5\tAverage\tGrade\n");
	for(i=0;i<n;i++)
	{
		per=0;
		printf("%d\t\t",i+1);
		for(j=0;j<5;j++)
		{
			per=(per+a[i][j]);
			printf("%d\t",a[i][j]);
		}
		per=per/5;
		printf("%d\t",per);
		if(per>=90)
			printf("'A+'\n");
		else if(per>=75)
			printf("'A'\n");
		else if(per>=60)
			printf("'B'\n");
		else if(per>=40)
			printf("'C'\n");
		else
			printf("Fail\n");
	}
}

