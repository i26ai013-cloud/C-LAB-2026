//program 39: LOOPING AND ARRAY
#include<stdio.h>
int main()
{
	int x,i,j,n;
	n=5;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%c",'A'+i);
		}
		printf("\n");
	}
	printf("\n\n");
	x=0;
	for(i=1; i<=n; i++)
	{
		if(('A'+x)>'Z')
		{
			return 0;
		}
		if('A'+x=='B')
		{
			printf("  ");
		}
		if('A'+x=='C')
		{
			printf(" ");
		}
		else
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%c",'A'+x);
		}
		printf("\n");
		x=x+1;
	}
	
}
