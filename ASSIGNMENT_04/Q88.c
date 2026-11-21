//PROGRAM 88: WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include<stdio.h>
int main()
{
	int real[100], dup[100];
	int i, n;
	int *p1, *p2;
	
	p1=real;
	p2=dup;
	printf("Enter number of elements=");
	scanf("%d",&n);
	
	printf("Enter elements in real array\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&real[i]);
	}
	printf("After copy of array in duplicate array.\n");
	for(i=0; i<n; i++)
	{
		*(p2+i)=*(p1+i);
		printf("%d\n",*(p1+i));
	}
}
