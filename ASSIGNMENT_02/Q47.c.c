//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD. 
#include<stdio.h>
int main()
{
	int i,a[10],b[10],c[10];
	printf("Enter two sets of numbers=\n");
	printf("set1\n");
	
	for(i=0; i<10; i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\nset2\n");
	for(i=0; i<10; i++)
	{
		printf("b[%d]=",i+1);
		scanf("%d",&b[i]);
	}
	
	printf("\nset3\n");
	for(i=0; i<10; i++)
	{
		int d=a[i]+b[i];
		printf("c[%d]=%d\n",i+1,d);
	}
}
