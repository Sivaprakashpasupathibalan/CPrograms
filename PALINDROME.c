#include<stdio.h>
#include<conio.h>
int num = 0;
int num_rev = 0;
int b, s = 0;
void main()
{
	printf("Enter the Number \n");
	scanf("%d",&num);
	num_rev = num;
   while(num_rev > 0)
   {
      b = num_rev % 10;
      s = (s*10) + b;
      num_rev = num_rev/10;
   }
   if(num == s)
	   printf("The given number %d is a palindrome",num);
   else
	   printf("The given number %d is not a palindrome",num);
	
}