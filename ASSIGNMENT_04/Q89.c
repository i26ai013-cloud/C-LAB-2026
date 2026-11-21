//PROGRAM 89:ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *pri , *sec;
	
	printf("Enter number of elements=");
	scanf("%d",&n);
	
	pri=(int*)malloc(n*sizeof(int));
	sec=(int*)malloc(n*sizeof(int));
	
	printf("Enter the array elements\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d",pri+i);
	}
	
	for(i=0; i<n; i++)
	{
		*(sec+(n-i-1))=*(pri+i);
	}
	
	printf("After reverse copying\n");
	
	i=0;
	while(i<n)
	{
		printf("%d\t",*(sec+i));
		i++;
	}
	
	free(pri);
	free(sec);
}
