//program 71: WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT  LENGTH OF STRING.
#include<stdio.h>
void string()
{
	char str[100];
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

int main()
{
	char str[100];
	printf("Enter the character:");
	str();
}
