//program 28:PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT. 
#include<stdio.h>
#include<math.h>
int main()
{
	int num, i, sum, original_num, remain, count;
	printf("Enter  a number=");
	scanf("%d",&num);
	original_num=num;
	count=0;
	sum=0;
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
		sum=sum+pow(remain,count);
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
