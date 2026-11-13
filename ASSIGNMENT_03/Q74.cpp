//PROGRAM :WRITE A PROGRAM TO CONCATINATE TWO STRINGS. (WITHOUT USIN STRING.H FILE) 
#include<stdio.h>
int main()
{
	char f[10], l[10], c[30];
	int i=0;
	printf("Enter\n");
	printf("First name=");
	do
	{
		scanf("%c",&f[i]);
		i++;
	}while(f[i-1]!='\n');
	
	i=0;
	printf("Last name=");
	do
	{
		scanf("%c",&l[i]);
		i++;
	}while(l[i-1]!='\n');
	
	i=0;
	int j=0;
	while(f[j]!='\n')
	{
		c[i]=f[j];
		i++;
		j++;
	}
	c[i]=' ';
	i++;
	j=0;
	
	while(l[j]!='\n')
	{
		c[i]=l[j];
		i++;
		j++;
	}
	c[i]='\0';
	for(j=0; j<i; j++)
	{
		printf("%c",c[j]);
	}
}
