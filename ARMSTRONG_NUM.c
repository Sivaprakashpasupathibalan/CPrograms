#include<stdio.h>
#include<conio.h>
unsigned int N_MAX = 0;
unsigned int sum = 0, old_val = 0, rem = 0;
void main()
{
	printf("Enter the Max Level of Number to Find Armstrong in between\n");
	scanf("%d",&N_MAX);
	for(int i = 1; i <= N_MAX; i++)
	{
	  old_val = i;rem = i;
	  sum = 0;
	  while(rem != 0)
	  {
	    int temp;
		 temp = (rem % 10);
         sum += (temp * temp * temp);
         rem = rem /10;		 
	  }
	  if(sum == old_val)
		  printf("%d\n",old_val);
	}	
}