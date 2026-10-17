//program 38:PROGRAM TO PRINT 1,4,9,16,25,.........N.
#include<stdio.h>
int main()
{
	int i,n,sqr;
	printf("Enter last number to be=");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		sqr=i*i;
		printf("%d",sqr);
		if(i!=n)
		{
			printf(",\t");
		}
	}
}
