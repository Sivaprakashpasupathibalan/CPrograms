#include<stdio.h>
#include<conio.h>
unsigned int MAX_NUM = 0;
unsigned int MAX = 0;
void main()
{
	printf("Enter the Number of Elements \n");
	scanf("%d",&MAX_NUM);
	unsigned int ARR[MAX_NUM];
	for(int i = 0; i < MAX_NUM; i++)scanf("%d",&ARR[i]);
	for(int i = 0; i < MAX_NUM; i++)
	{
      if(MAX < ARR[i])
		  MAX = ARR[i];
	}
printf("The Maximum Number in the elements is %d\n",MAX);	
}