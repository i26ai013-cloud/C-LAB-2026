//program 60: WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD
#include<stdio.h>
int eo(int num)
{
	int remain;
	remain=num%2;
	if(remain==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
int main()
{
	int n, remain;
	printf("Enter the number=");
	scanf("%d",&n);
	eo(n);
}
