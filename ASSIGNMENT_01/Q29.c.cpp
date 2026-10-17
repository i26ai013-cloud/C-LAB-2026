//program 29:PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT. 
#include<stdio.h>
int main()
{
	int original_num, num, sum, remain;
	printf("Enter a number=");
	scanf("%d",&num);
	sum=0 										// predeclaration
	original_num=num;							// reserving original value
	while(num!=0)
	{
		remain=num%10;
		num=num/10;
		sum=sum*10+remain;
	}
	if(original_num==sum)
	{
		printf("number is an palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
