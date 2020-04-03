#include<stdio.h>
#include<ctype.h>

int main()
{
char alphabet;
printf("Please Enter the Alphabet: \n");
alphabet = getchar();
printf("The Input Alphabet is: %c \n",alphabet);
if(islower(alphabet))
	putchar(toupper(alphabet));
else
	putchar(tolower(alphabet));

return 0;
}