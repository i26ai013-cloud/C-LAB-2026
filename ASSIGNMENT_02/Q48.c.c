//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS. 
#include<stdio.h>
int main()
{
	int i, a[10], b[10], c;
	printf("Enter ten integers\n");
	
	for(i=0; i<10; i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0; i<10; i++)
	{
		printf("b[%d]=",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0; i<10; i++)
	{
		c=a[i];
		a[i]=b[i];
		b[i]=c;
		printf("a[%d]=%d    b[%d]=%d\n",i+1,a[i],i+1,b[i]);
	}
}
