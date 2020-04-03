#include<stdio.h>
#include<conio.h>

int main()
{
int x = 10 , y = 20;
int c = 0;
printf("The Values of x = %d and y = %d \n",x,y);
c = x;
x = y;
y = c;
printf("The Values of x = %d and y = %d \n",x,y);
return 0;
}