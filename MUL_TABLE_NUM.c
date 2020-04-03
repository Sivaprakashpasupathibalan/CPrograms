#include<stdio.h>
#include<conio.h>
#define MAX 10
unsigned int NUM = 0;

void main()
{
	printf("Enter the Number for Multiplication Table\n");
	scanf("%d",&NUM);
	for(int i  = 1; i <= MAX ; i++)
	{
		printf("%d x %d = %d\n",i,NUM,(i*NUM));
	}
}