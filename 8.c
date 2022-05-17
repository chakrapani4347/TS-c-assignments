#include<stdio.h>
int main()
{
	int i = 0,j = 0,k = 0,n = 5;
	for (i = 0;i < n;i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("*");
		}
		/*for (j = 0;j < n - i;j++)
		{
			printf(" ");
		}*/
		printf("\n");
	}
	for(i = 0;i < n;i++)
	{
		for (j = 0;j<=i;j++)
		{
			printf(" ");
		}
		for (k = 0;k<n - i;k++)
		{
			printf("*");
		}
		printf("\n");
	}		
}
