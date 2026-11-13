/*program 64:WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUBERS.TEST THE FUNCTION FOR 
N=5,10,AND 15.*/ 
#include<stdio.h>
int fibo(int num)
{
	int a=0, b=1, c, i;
	printf("%d\n",num);
	printf("%d\t%d\t",a,b);
	for(i=0; i<num; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
}

int main()
{
	int n;
	n=5;
	fibo(n);
	n=10;
	fibo(n);
	n=15;
	fibo(n);
}
