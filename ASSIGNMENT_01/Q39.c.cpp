//program 39:PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,.........N.
#include<stdio.h>
int main()
{
	int n,i,ans;
	printf("Enter e number");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("%d/%d!",i,i);
		if(i<n)
		{
			printf("+");
		}
	}
}
