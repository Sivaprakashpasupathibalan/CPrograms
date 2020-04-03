#include<stdio.h>
#include<conio.h>

void main()
{
    int x = 6, y = 4;
	printf("BEFORE SWAP x = %d and y = %d\n", x, y);
    x = x * y;
    y = x / y;
    x = x / y;
    printf("AFTER SWAP x = %d and y = %d \n\a" , x, y);
    getch();
}