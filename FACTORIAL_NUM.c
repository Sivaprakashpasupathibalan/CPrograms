#include<stdio.h>
#include<conio.h>
int Factorial = 0;
int Num = 0;
int main()
{
	printf("Enter the Number to find the Factorial \n");
	scanf("%d",&Num);
	Factorial = Num;
	for(int i = 1; i < Num; i++)
	{
		Factorial = Factorial * i;
		//printf("val :%d\t\t%d\n",Factorial,i);
	}
	printf("Factorial of %d is %d",Num,Factorial);
	return 0;
}
