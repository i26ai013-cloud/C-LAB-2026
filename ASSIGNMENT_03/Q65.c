//program 65: WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
#include<stdio.h>
int prime(int num)
{
	int i, flag=0;
	if(num==2)
	{
		return 1;
	}
	else if(num<2)
	{
		printf("Enter valid number");
	}
	else
	{
		for(i=2; i<num && flag==0; i++)
		{
			if(num%i==0)
			{
				return 0;
			}
			if(i==num-1)
			{
				return 1;
			}
		}
	}
}

int main()
{
	int n;
	printf("Enter number=");
	scanf("%d",&n);

	printf("%d",prime(n));
}
