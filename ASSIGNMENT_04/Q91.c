/*PROGRAM 91:WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A 
VARIABLE CONTAINING THE ENTERED NUMBER. */
#include<stdio.h>
int main()
{
	int i,number;
	int *p;
	p=&number;
	printf("Enter the number=");
	scanf("%d",p);
	
	printf("square=%d\n",*p**p);
	printf("cube=%d", *p**p**p);
}
