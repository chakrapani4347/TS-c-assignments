#include<stdio.h>
int main()
{
	int k=-1;
	for(int i=1;i<6;i++)
	{
		for(int j=0;j<i;j++)
		{
			k=k+1;
			(k%2==0)?printf("%d ",k):printf("-%d ",k);
		}
		printf("\n");
	}
	return 0;
}


/*
