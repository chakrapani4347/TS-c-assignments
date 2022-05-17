#include<stdio.h>
int main()
{
	int i,n = 5,j =0;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < (n - i);j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i;k ++)
		{
			printf("*");
		}
		printf("\n");


	}
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n - i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

