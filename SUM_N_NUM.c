#include<stdio.h>
#include<conio.h>
unsigned MAX_NUM = 0,SUM = 0;
void main()
{
	printf("Enter the number of elements to add \n");
	scanf("%d",&MAX_NUM);
	printf("Enter the numbers to add \n");
	unsigned int ARR[MAX_NUM];
	for(int i = 0; i < MAX_NUM; i++)scanf("%d",&ARR[i]);
	for(int i = 0; i < MAX_NUM; i++)SUM += ARR[i];
	printf("The SUM of the elements are %d\n",SUM);
	
}