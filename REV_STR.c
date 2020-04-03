#include<stdio.h>
#include<conio.h>
char str[100];
char rev[100];
int T_char = 0;
void main()
{
   //clrscr();
   printf("Enter the String\n");
   gets(str);
   printf("The given string is :%s \n",str);
   for(int i = 0; i < sizeof(str); i++)
   {
	   if(str[i] != '\0')
		   T_char = i;
   }
   for(int i = 0; i <= T_char; i++)
   {
	   rev[i] = str[T_char - i];
   }
   printf("The given string is :%s\n",rev);
}