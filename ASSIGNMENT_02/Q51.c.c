//PROGRAM TO REVERSE AN ARRAY.
#include<stdio.h>
int main()
{
	int i, a[100], c, n;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=1; i<=n/2; i++)
	{
		c=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=c;
	}
	for(i=1; i<=n; i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
