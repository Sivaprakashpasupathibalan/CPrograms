#include<stdio.h>
#include<conio.h>
unsigned int num = 0;
void main()
{
	printf("Enter the number to find odd or even \n");
	scanf("%d",&num);
	if((num & 0x01) == 1) printf("The Number %d is ODD\n",num);
	else printf("The Number %d is EVEN\n",num);
}