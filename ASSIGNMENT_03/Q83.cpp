//PROGRAM 83:PROGRAM TO READ A STRING AND ARRANGE ALL CHARACTER AS THEY APPEAR IN DICTIONARY.(SORT).
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100], c, max;
	int i,j;
	printf("Enter the string:");
	scanf("%s",str);
	int len=strlen(str);
	printf("%d\n",len);
	for(i=0; i<len; i++) //converting o lower case
	{
		if(str[i]>64 && str[i]<91)
		{
			str[i]=str[i]+32;
		}
	}
	i=0;
	for(i=0; i<len; i++) // sorting 
	{
		for(j=1; j<len; j++)
		{
			if(str[j-1]>str[j])
			{
				c=str[j];
				str[j]=str[j-1];
				str[j-1]=c;
			}
		}
	}
	printf("After sorting:");
	puts(str);
}
