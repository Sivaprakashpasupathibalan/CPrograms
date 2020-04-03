#include<stdio.h>
#include<conio.h>
#include<string.h>

char STR[10];
int flag = 0;
void main()
{
	printf("Enter the Number\n");
	scanf("%s",&STR);
    for(int i = 0; i < strlen(STR); i++)
	{
		if(STR[i] == '.')
		{
			flag = 1;
			break;
		}
		else
		    flag = 2;
	}
	if(flag == 2)printf("%s is INTEGER\n",STR);
	else if(flag == 1)printf("%s is FLOAT\n",STR);
	
}