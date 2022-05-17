#include<stdio.h>
#define SIZE 5
int main()
{
	for (int i = 1;i  <= SIZE;i++)
	{
		for (int j = 0;j < i;j++)
		{
			if (i % 2 != NULL)
			{
				printf("%d",i);
			}
			else
			{
				printf("*");
			}
			
		}
			printf("\n");
	}
}
