//program 32: PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS . 
#include<stdio.h>
int main()
{
	int a[100], n, i, max, smax;
	printf("Enter the value of N=");
	scanf("%d",&n);
	printf("Enter the value of\n");
	
	for(i=0; i<n; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	max=a[0];
	smax=a[0];
	
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	if(max==a[0])
		{
			smax=a[1];
			for(i=1; i<n; i++)
			{
				if(a[i]>smax)
				{
					smax=a[i];
				}
			}
			
		}
	else
	{
		for(i=0; i<n; i++)
		{
			if(a[i]>smax && a[i]<max)
			{
				smax=a[i];
			}	
		}
	}
	printf("max=%d\n",max,i);
	printf("second max=%d",smax);
}
