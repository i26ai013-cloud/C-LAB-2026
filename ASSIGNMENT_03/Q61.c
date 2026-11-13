//program 61:WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include<stdio.h>
int palin(int num)
{
	int sum=0, remain, i;
	int original_num=num;
	for(i=1; num!=0; i++)
	{
		remain=num%10;
		num/=10;
		sum=sum*10+remain;
	}
	if(original_num==sum)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
int main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	palin(n);
}
