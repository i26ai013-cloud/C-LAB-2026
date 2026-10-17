//program 28:PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT. 
#include<stdio.h>
int main()
{
	int num, i, sum, original_num, remain, count, power;
	printf("Enter  a number=");
	scanf("%d",&num);
	original_num=num;
	count=0;
	sum=0;
	power=1;
	//reserving original number value in temp
	
	//finding number of digits
	while(num!=0)
	{
		num=num/10;
		count=count+1;
	}
	printf("number of digits=%d\n",count);
	num=original_num;
	//reassigning number value
	while(num!=0)
	{
		remain=num%10;
		num=num/10;
		for(i=1; i<=count; i++)
		{
			power=power*remain;
		}
		sum=sum+power;
		power=1;
		//reassigning value of power to maintain for loop
	}
	if(original_num==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
}
