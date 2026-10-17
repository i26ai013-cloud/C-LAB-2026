//program 22:PROGRAM TO CALCULATE FACTORIAL OF A NO. 
#include<stdio.h>
int main()
{
	double i,n,fact;
	printf("Enter a number=");
	scanf("%lf",&n);
	fact=1;
	for (i=1; i<=n; i++)
	{
		fact=fact*i;	
	} 
	printf("factorial=%.0lf",fact);
}
