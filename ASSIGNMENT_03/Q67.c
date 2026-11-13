//program 67:WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM. 
#include<stdio.h>
int max(int a[],int count)
{
	int i,max;
	for(i=0; i<count; i++)
	{
		if(i==0)
		{
			max==a[0];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

int main()
{
	int count,i;
	printf("Enter number of arrays=");
	scanf("%d",&count);
	int a[count];
	for(i=0; i<count; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Maximum Element=%d",max(a,count));
}
