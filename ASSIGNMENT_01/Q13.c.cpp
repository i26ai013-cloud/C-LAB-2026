//program 13:  PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD. 
#include<stdio.h>
int main ()
{
	int a,b;
	printf("a=");
	scanf("%d",&a);
	b=a%2;
	if (b==0)
	{
		printf("number is even");
	}
	else if (b==1)
	{
		printf("number is odd");
	}
}

