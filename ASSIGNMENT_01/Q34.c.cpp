//program 33: PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) 
#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("how many numbers you want=");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
	printf("a[0]=0\n");
	printf("a[1]=1\n");
	for(i=2; i<n; i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf("a[%d]=%d\n",i,a[i]);
	}
}
