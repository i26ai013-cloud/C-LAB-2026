/*program 40: READ NUMBERS TILL A NEGATIVE NUMBERS IS ENTERED AND CALCULATE SUM 
OF A LIST OF NUMBERS READ.*/
#include<stdio.h>
int main()
{
	int a[100],n, i, sum;
	i=-1;
	a[-1]=5;
	n=0;
	sum=0;
	while(a[i]>=0)
	{
		i++;
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		n=n+1;
	}
	for(i=0; a[i]>=0; i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d",sum);
}
