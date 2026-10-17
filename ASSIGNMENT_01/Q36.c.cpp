//program 36:PROGRAM TO PRINT 1,3,5,7,9………N. 
#include<stdio.h>
int main()
{
	int n,a,k;
	printf("Enter an odd number=");
	scanf("%d",&n);
	if(n%2==1)
	{
		for(k=1; k<=(n+1)/2; k++)
		{
			a=2*k-1;
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
