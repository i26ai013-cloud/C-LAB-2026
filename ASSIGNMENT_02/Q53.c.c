//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.
#include<stdio.h>
int main()
{
	int i, j, a[3][3];
	printf("Enter the elements\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nafter summation of rows\n");
	for(j=0; j<3; j++)
	{
		int sum=0;
		for(i=0; i<3; i++)
		{
			sum=sum+a[i][j];
		}
		printf("%d\t",sum);
	}
}
