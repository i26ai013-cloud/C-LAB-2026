//program 17:PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&) 
#include<stdio.h>
int main ()
{
	int a,b,c;
	printf(" enter the numbers\n");
	scanf("%d %d %d",&a, &b, &c);
	if(a>=b && a>=c)
	{
		printf("greatest number=%d",a);
	}
	else if (b>=a && b>=c)
	{
		printf("greatest number=%d",b);
	}
	else
	{
		printf("greatest number=%d",c);
	}
}
