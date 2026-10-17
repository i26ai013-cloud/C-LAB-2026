//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT. 
#include<stdio.h>
int main()
{
	int i,j,a[3][3], max, min;
	
	printf("Enter elements of a matrix\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
			
			if(i==0 && j==0)
			{
				max=a[0][0];
				min=a[0][0];
			}
			
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
	}
	printf("max=%d\tmin=%d",max,min);
}
