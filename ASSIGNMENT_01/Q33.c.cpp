//program 33: PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS. 
#include<stdio.h>
int main()
{
	int a[100], max, min, i, n;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	max=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("max=%d\tmin=%d",max, min);
}
