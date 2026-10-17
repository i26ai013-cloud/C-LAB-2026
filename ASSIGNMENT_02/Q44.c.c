/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY 
ELEMENT. */
#include<stdio.h>
int main()
{
	int i,a[10],even=0,odd=0;
	printf("Enter ten numbers\n");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
	}
	printf("even numbers=%d\n",even);
	printf("odd numbers=%d",odd);
}
