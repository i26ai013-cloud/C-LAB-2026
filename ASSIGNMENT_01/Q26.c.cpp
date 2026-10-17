//program 26:PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N.
#include<stdio.h>

int main()
{
	float n,k1,k2,sum,i;
	printf("Enter the number=");
	scanf("%f",&n);
	k1=(n-1)/2.0;
	k2=(n)/2.0;
	sum=0;
	
	if(k1==(int)k1)
	{
		printf("Number is odd\n");
		
		for(i=1;i<=k1+1;i++)
		{
			sum=sum+2*i-1;
		}
		printf("sum of all odd numbers=%.0f",sum);
	}
	else if(k2==(int)k2)
	{
		printf("Number is even\n");
		
		for(i=1;i<=k2;i++)
		{
			sum=sum+2*i;
		}
		printf("sum of all even numbers=%.0f",sum);
	}
}
