//program 57: PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX. 
#include<stdio.h>
int main()
{
	int i, j, k, a[3][3], b[3][3], c[3][3];
	printf("Enter the elements of matrix");
	printf("\nMatrix 1\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix 2\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nMatrix 3\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			int sum=0;
			for(k=0; k<3; k++)
			{
				c[i][j]= a[i][k]*b[k][j];
				sum+=c[i][j];
			}
			printf("%d\t",sum);
		}
		printf("\n");
	}
}
