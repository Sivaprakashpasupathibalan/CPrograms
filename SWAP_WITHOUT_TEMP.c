#include<stdio.h>
#include<conio.h>

int main()
{
	int x = 23;
	int y = 53;
	printf("The value of the Variables X is %d and Y is %d \n",x,y);
	x = x + y;
	y = x - y;
    x = x - y;
	printf("The value of the Variables after swap X is %d and Y is %d \n",x,y);
	return 0;
}