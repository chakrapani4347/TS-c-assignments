#include<stdio.h>
int main()
{
	int i = 0,j = 0,n = 5;
	for (int i = 1;i <= n;i++)
	{
		for (j = i;j < n;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
