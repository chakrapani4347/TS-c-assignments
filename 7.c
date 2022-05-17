#include<stdio.h>
#define N 5

int main()
{
	int i = 0,j = 0;
	for (i = 0;i < N;i++)
	{
		for (j = N;j >= 0;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


