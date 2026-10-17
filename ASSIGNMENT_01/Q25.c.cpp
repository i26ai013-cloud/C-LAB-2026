//program 25:PROGRAM TO PRINT TABLE OF ANY NO.
#include<stdio.h>

int main()
{
	int a,b,i;
	b=1;
	printf("Enter the number=");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		b=a*i;
		printf("%d * %d% = %d\n", a, i, b);
	}
}
