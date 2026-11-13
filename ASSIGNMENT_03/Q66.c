/*program 66: WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS. 
               NCR = (!N/(!R*!(N-R)))*/
#include<stdio.h>
int fact(int num)
{
	int i,fact=1;
	for(i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	return fact;
}
int ncr(int n, int r)
{
	int ncr;
	ncr=fact(n)/(fact(r)*fact(n-r));
	return ncr;
}
int main()
{
	int n,r;
	printf("Enter the value of n=");
	scanf("%d",&n);
	printf("Enter the value of r=");
	scanf("%d",&r);
	printf("NCR of value entrered=%d", ncr(n,r));
}
