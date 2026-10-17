//program 42: READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
#include<stdio.h>
int main()
{
	int n,i,remain;
	printf("Enter the number=");
	scanf("%d",&n);
	if(n==1||n==0)
	{
		printf("Number is neither prime nor composite");
	}
	else if(n<0)
	{
		printf("Enter valid positive number");
	}
	else
	{
		for(i=2; i<n; i++)
		{
			remain=n%i;
			if(remain==0)
			{
				printf("Number is composite");
				return 0;
			}
			else if(i==n-1)
			{
				printf("Number is prime");
			}
		}
	}
}
