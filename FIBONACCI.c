#include<stdio.h>
#include<conio.h>
int num = 0;
void main()
{
	printf("Please Enter the Number of Fibonacci Numbers \n");
	scanf("%d",&num);
	if(num < 2)
	   num = 2;
    int fib_ser[num];
	fib_ser[0] = 1; fib_ser[1] = 1;
	printf("The Numbers are \n %d \n %d \n",fib_ser[0],fib_ser[1]);
	for(int i = 0; i < num ; i++)
	{
	   fib_ser[i + 2] = fib_ser[i] + fib_ser[i + 1];
	   printf("%d\n",fib_ser[i + 2]);
	}
}