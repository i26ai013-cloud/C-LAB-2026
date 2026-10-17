//program 58: PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY. 
#include<stdio.h>
int main()
{
	int i, n, search, a[100];
	printf("Enter number of elements= ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to be search= ");
	scanf("%d",&search);
	
	for(i=1; i<=n; i++)
	{
		if(a[i]==search)
		{
			printf("a[%d]\t",i);
		}
	}
}
