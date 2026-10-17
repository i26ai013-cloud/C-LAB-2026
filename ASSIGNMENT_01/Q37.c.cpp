//program 37: PROGRAM TO PRINT 2,4,6,8,10,12………N.
#include<stdio.h>
int main()
{
	int n,k,a;
	printf("Enter an even number= ");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		for(k=1; k<=n/2; k++)
		{
			a=2*k;
			printf("%d",a);
			if(a!=n)
			{
				printf(",");
			}
		}
	}
	else
	{
		printf("Enter valid number");
	}
}
