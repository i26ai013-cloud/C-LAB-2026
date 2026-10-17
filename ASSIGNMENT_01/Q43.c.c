//program 43: PROGRAM TO CALCULATE SALES AND COMMISSION.
#include<stdio.h> 
int main()
{
	float sales, comm; 
	printf("Enter the sales(in Rs)="); 
	scanf("%f",&sales);

	if(sales <= 500)
	{
		comm= 0.05*sales;
	}
	else if(sales <= 2000)
	{
		comm= 35 + sales*0.1;
	}
	else if(sales <= 5000)
	{
		comm= 185 + 0.12*sales;
	}
	else
	{
		comm= 0.125*sales;
	}
	printf("commision=%.2f",comm);
}
