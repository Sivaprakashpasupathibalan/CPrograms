#include<stdio.h>
#include<conio.h>
long long int power = 1;
unsigned int num = 0; 
unsigned int Pow = 0;
void main()
{
	printf("Enter the Number\n");scanf("%d",&num);
	printf("Enter the Power\n");scanf("%d",&Pow);
	power = num;
	for(int i = 1; i < Pow; i++)
	{
		power = (num * power);
	}
	printf("The Power of the given number is %lld",power);
	
}