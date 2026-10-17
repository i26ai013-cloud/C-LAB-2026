//program 16:PROGRAM TO READ THREE NOS. AND PRINT MAX. 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers=\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>=b)
	{
		if(a>=c)
		{
			printf("greatest number=%d",a);
		}
		else
		{
			printf("greatest number=%d",c);
		}
	}
	else if (b>=c)
	{
		printf("greatest number=%d",b);
	}
	else
	{
		printf("greatest number=%d",c);
	}
}
