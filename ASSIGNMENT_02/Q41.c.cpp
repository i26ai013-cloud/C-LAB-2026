//program 41: LOOPING AND ARRAY
#include<stdio.h>
int main()
{
	int i,j,k,n;
	n=4;	
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=i; k++)
		{
			printf("%d",k);
		}
		for(k=i-1; k>0; k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
