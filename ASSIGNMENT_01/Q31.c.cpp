//program 31:PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO. 
#include<stdio.h>
int main()
{
	int num, sum, remain;
	printf("Enter a number=");
	scanf("%d",&num);
	sum=0;
	
	while(num!=0)
	{
		remain=num%10;
		num=num/10;
		sum=sum+remain;
	}
	printf("sum of digits=%d",sum);
}
