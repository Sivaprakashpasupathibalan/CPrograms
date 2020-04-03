#include<stdio.h>
#include<conio.h>
unsigned int n = 0;
float sum = 0;
void main()
{
	printf("Enter the Number of elements to find average \n");
	scanf("%d",&n);
	float NUM_ARR[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%f",&NUM_ARR[i]);
	}
	printf("The Given Numbers are :");
	for(int i = 0; i < n; i++)
	{
		printf("%f\t",NUM_ARR[i]);
		sum += NUM_ARR[i];
	}
	printf("\n");
	printf(" The Average of the Numbers is %f",(sum/n));
}