#include<stdio.h>
#include<conio.h>
unsigned int num = 0;
void main()
{
	printf("Enter the Number to find factors \n");
	scanf("%d",&num);
	printf("The Factors are: \n");
	for(int i = 1; i <= (num / 2); i++)
	{
	 if((num % i) == 0)
	 {
	 printf("%d\n",i);
	 }	 
	}
}
