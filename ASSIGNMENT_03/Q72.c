//program 72: WRITE A PROGRAM TO CALCULATE LENGTH OF A STRING. 
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the character:");
	int i=0,n=0;
	do
	{
		scanf("%c",&str[i]);
		i++;
		n++;
	}while(str[i-1]!='\n');
	puts(str);
	printf("Length of string=%d",n-1);
}
