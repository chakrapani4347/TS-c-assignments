#include<stdio.h>
int main()
{
	int i = 0,j = 0,k = 0,n = 5;
	for (i = 0;i < n;i++)
	{
		for (j = n - 1;j >= i;j--)
		{
			printf(" *");
		}
		printf("\n");
	}
}
