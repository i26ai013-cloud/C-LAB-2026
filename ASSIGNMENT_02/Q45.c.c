/*PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO 
ELEMENTS.*/
#include<stdio.h>
int main()
{
	int i, pos=0, zero=0, a[10], neg=0;
	printf("Enter ten numbers");
	
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0)
		{
			pos+=1;
		}
		else if(a[i]<0)
		{
			neg+=1;
		}
		else
		{
			zero+=1;
		}
	}
	printf("positive=%d\tnegetive=%d\tzeroes=%d",pos,neg,zero);
}
