//program 27:PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter a number=");
	scanf("%d",&a);
	b=1;
	
	for(i=2;i<a;i++)
	{
		b=a%i;
		if(b==0)
		{
			printf("Number is not prime");
			i=a;
		}
		else if(i==a-2)
		{
			printf("Number is prime");
		}
	}
}
