#include<stdio.h>
#include<conio.h>
int a = 0 , b = 0; //Global Declaration of variables
void main()
{
	printf("Please Enter the two numbers to check Greatest ans smallest number \n");
	scanf("%d%d",&a,&b);
	printf("The entered numbers are a is %d and b is %d\n",a,b);
	if(a == b)
		printf("\n Both Numbers are Equal \n");
	if(a < b)
		printf("The value a : %d less than b : %d \n",a,b);
	else 
		printf("The value a : %d Greater than b : %d \n",a,b);
}