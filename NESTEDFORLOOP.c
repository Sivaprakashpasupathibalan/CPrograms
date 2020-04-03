#include<stdio.h>
#include<conio.h>

void main()
{
	printf("Example of the Nested For Loop \n");
	int i = 0, j = 0;
	for(i = 0; i < 10; i++)
	{
		printf("\t\t\t\t\t\t\t\t");
		for(j = 0; j < 10 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}