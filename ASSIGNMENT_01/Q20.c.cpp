//program 20:PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE. 
#include <stdio.h>
int main() 
{
	char sign;
	float num1, num2, t;
	
	printf("enter sign (+,-,*,/)=");
	scanf("%c",&sign);
	printf("Enter two numbers=\n");
	scanf("%f %f", &num1, &num2);
	switch (sign)
	{
		case'+':
		{
			t=num1+num2;
			printf("%f",t);
		}
		case'-':
		{
			t=num1-num2;
			printf("%f",t);
		}
		case'*':
		{
			t=num1*num2;
			printf("%f",t);
		}
		case'/':
		{
			if(num2!=0.0)
			{
				t=num1/num2;
				printf("%f",t);
			}
			else
			{
				printf("Error");
			}
		}
	}
}
