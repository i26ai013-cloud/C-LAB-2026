//program 30: PROGRAM TO REVERSE OF A GIVEN NO. 
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
		sum=sum*10+remain;
	}
	printf("reversed number=%d",sum);
}
