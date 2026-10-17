//program 5:PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY. 
#include<stdio.h>
int main()
{
	int i, n, search, count=0;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to search=");
	scanf("%d",&search);
	for(i=0; i<n; i++)
	{
		if(a[i]==search)
		{
			count++;
		}
	}
	printf("\nnumber of element in array=%d",count);
}
