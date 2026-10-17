//program 36: LOOPING AND ARRAY
#include<stdio.h>
int main()
{
	int n,i,j;
	n=5;
	for(i=1; i<=n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}
}
