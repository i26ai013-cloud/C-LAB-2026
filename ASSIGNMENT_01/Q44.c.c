//program 44: PROGRAM TO CALCULATE ELECTRICITY BILL. 
#include<stdio.h>
int main()
{
	float unit, bill;
	printf("Enter the units of electricity consume=");
	scanf("%f",&unit);
	
	if(unit<0)
	{
		printf("enter valid units consume");
	}
	else if(unit <= 200)
	{
		bill=unit*0.5;
	}
	else if(unit <= 400)
	{
		bill=100+ 0.65*(unit-200);
	}
	else if(unit <= 600)
	{
		bill=230+ 0.80*(unit-400);
	}
	else 
	{
		bill=425+ 1.25*(unit-600); 
	} 
	printf("Bill=%.2f",bill);
}
