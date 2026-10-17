//PROGRAM TO READ AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS.
#include<stdio.h>
int main()
{
	int i, sum=0, a[10];
	printf("Enter ten numbers\n");
	for(i+0; i<10; i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
