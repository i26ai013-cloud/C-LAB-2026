//program 24:WRITE A C PROGRAM TO FIND THE VALUE OF Y USING <MATH.H>
#include<stdio.h>
#include<math.h>

int main()
{
	float x,y;
	int n;
	printf("Enter the value of X and n=\n");
	scanf("%f  %d", &x, &n);
	switch (n)
	{
		case 1:
			{
				y=1+x;
				printf("y=%f",y);
			}
			break;
		case 2:
			{
				y=1+x/n;
				printf("y=%f",y);
			}
			break;
		case 3:
			{
				y=1+ pow(x, n);
				printf("y=%f",y);
			}
			break;
		default :
			{
				y=1+ n*x;
				printf("y=%f",y);
			}
	}
}
