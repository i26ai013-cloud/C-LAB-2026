//program 41: READ A NUMBER N AND PRINT FACTOR OF N.
#include<stdio.h>
int main()
{
	int n,i,remain;
	printf("Enter the number=");
	scanf("%d",&n);
	printf("factors=");
	
	for(i=1; i<=n; i++)
	{
		remain=n%i;
		if(remain==0)
		{
			printf("%d",i);
			if(i<n)
			{
				printf(",");
			}
		}
	}
}
