//program 23:PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).
#include<stdio.h>
int main()
{
	int a,b,i,c;
	printf("Enter base=");
	scanf("%d",&a);
	printf("Enter power=");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++)
	{
		c=a*c;
	}
	printf("ANS=%d",c);
}
