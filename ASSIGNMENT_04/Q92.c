//PROGRAM 92:WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include<stdio.h>
int main()
{
	int n,arr[100];
	int *p,*pmax;
	p=&arr[0];
	pmax=&arr[0];
	
	printf("Enter number of elements=");
	scanf("%d",&n);
	
	/* I TRIED TO MAKE USE OF POINTERS AND ADDRESSES IS WAY MORE INTERESTING*/
	
	while(p<(&arr[0] + n) )  //assignment plus logic
	
	{
		scanf("%d",p);
		
		if(*p > *pmax)
		{
			pmax=p;
		}
		p++;
	}
	printf("\n\nMAX=%d",*pmax);
}

