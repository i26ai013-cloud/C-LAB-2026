//program 40: LOOPING AND ARRAY
#include<stdio.h>
int main()
{
	int i,n,j;
	n=5;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j==i)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
