//program 38: LOOPING AND ARRAY
#include<stdio.h>
int main()
{
	int i,j,k,n;
	n=5;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
		{
			if(j<n-i)
			{
				printf(" ");
			}
			else if(j==n-i)
			{
				for(k=1; k<=2*i-1; k++)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
}
