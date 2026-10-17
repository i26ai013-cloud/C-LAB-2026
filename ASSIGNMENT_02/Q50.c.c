//PROGRAM TO SORT (BUBBLE SORT) AN ARRAY.
#include<stdio.h>
int main()
{
	int i, a[100],j, n, c;
	printf("Enter number of elements=");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	//bubble sort
	for(i=1; i<=n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(a[j+1]<a[j])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	
	//print what you get
	printf("\n");
	for(i=1; i<=n; i++)
	{
		printf("%d\t",a[i]);
	}
}
