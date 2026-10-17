//program 49:PROGRAM TO SORT (SELECTION SORT) AN ARRAY. 
#include<stdio.h>
int main()
{
	int i,j,min,copy,n;
	printf("Enter number of elements in array=");
	scanf("%d\n",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		min=a[i];
		copy=i; 
		
		for(j=i; j<n; j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				copy=j;
			}
		}
		int c=a[copy];
		a[copy]=a[i];
		a[i]=c;
		printf("a[%d]=%d\ta[%d]=%d\n",i,a[i], copy, a[copy]);
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
