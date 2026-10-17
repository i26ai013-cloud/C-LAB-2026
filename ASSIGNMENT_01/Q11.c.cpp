//program 11: PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME. 
#include<stdio.h>
int main()
{
	int t,sec,min,hours;
	printf("Enter total seconds:\n");
	scanf("%d",&t);
	hours=t/3600;
	min=(t%3600)/60;
	sec=t%86400;
	printf(" hours=%d\n",hours);
	printf(" minutes=%d\n",min);
	printf(" seconds=%d",sec);
}
