#include<stdio.h>
void main()
{
	int age=22;
	int *ptr=&age; //*=value at address operator &=address of operator
	int _age=*ptr;
	printf("%d \n",age); //value of age
	printf("%d \n",_age); //value of _age
	printf("%d \n",*ptr); //value of pointer
	printf("%d \n",*(&age)); //value of age
	//%d for value
	printf("%p \n",ptr); //address of age
	printf("%p \n",&age); //address of age
	printf("%p \n",&ptr); //address of pointer
	//for pointer use %p
	printf("%u \n",ptr); //u=unsigned int
}
