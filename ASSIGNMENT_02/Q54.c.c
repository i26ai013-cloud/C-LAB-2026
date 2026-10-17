//program 54: PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE. 
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
	
	printf("\nMatrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose of a matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
