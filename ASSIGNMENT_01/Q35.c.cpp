/*program 35:READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER 
SHOWING SUM OF DIGIT OF N */
#include<stdio.h>
int main()
{
	int num,sum,remain;
	printf("enter a number=");
	scanf("%d",&num);
	sum=num;
	while((sum/10)!=0)
	{
		sum=0;
		while(num!=0)
		{
			remain=num%10;
			num=num/10;
			sum=sum+remain;
		}
		num=sum;
	}
	printf("sum=%d",sum);
}
