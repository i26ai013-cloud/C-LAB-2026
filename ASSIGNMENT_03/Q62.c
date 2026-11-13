//program 62:WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT. 
#include<math.h>
int arm(int num)
{
	int remain, sum=0, count=0, org_num, i, pow=1;
	org_num=num;
	
	for(i=1; num!=0; i++)
	{
		num=num/10;
		count++;
	}
	
	num=org_num;
	for(i=1; num!=0; i++)
	{
		remain=num%10;
		pow=1;
		for(i=1; i<=count; i++)
		{
			pow=pow*remain;
		}
		num=num/10;
		sum=sum+pow;
	}
	printf("Is number %d armstrong=",org_num);
	
	if(org_num==sum)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
}


int main()
{
	int n;
	printf("Enter the number=");
	scanf("%d",&n);
	arm(n);
}
