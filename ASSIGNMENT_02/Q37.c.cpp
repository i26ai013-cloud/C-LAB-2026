//program 37:LOOPING AND ARRAY.
#include<stdio.h>
int main()
{
	int n,i,j;
	n=5;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
