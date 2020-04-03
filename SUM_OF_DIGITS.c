#include<stdio.h>
#include<conio.h>
char num[10];
int sum = 0;
void main()
{
   //clrscr();
   printf("Enter the Number to find sum of digits\n");
   gets(num);
   //printf("%d\n",sizeof(num));
  // printf("%d\n",'\0' & 0x0F);
   for(int i = 0; i < sizeof(num); i++)
   {
	   sum += (num[i] & 0x0F);
   }
   printf("The Sum of the digits is %d \n",sum);
}