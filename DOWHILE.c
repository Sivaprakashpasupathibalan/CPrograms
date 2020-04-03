#include<stdio.h>
#include<conio.h>

void main()
{
	printf("Example of DOWHILE LOOP \n");
	int i = 10;
	do
	{
		printf("i = %d \n",i);
		i = i -1;
	}
	while(i > 0);
}