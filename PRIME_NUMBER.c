#include<stdio.h>
#include<conio.h>
unsigned int MAX_NUM = 0;
void main()
{
	printf("Enter the Number until Which Prime Number Should be found\n");
	scanf("%d",&MAX_NUM);
	if(MAX_NUM >= 1)
		printf("%d\n",1);
	for(int count = 2; count <= MAX_NUM; count++)
	{
		for(int i = 2; i <= count; i++)
		{
			if((count % i == 0) && (i != count))
				break;
			if(count == i)
				printf("%d is the PRIME NUMBER \n",i);
		}
	}
}
