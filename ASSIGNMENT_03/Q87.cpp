//PROGRAM 87:WRITE A PROGRAM TO READ AN ARRAY OF NAMES AND TO SORT THEN IN ALPHABETICAL ORDER. 
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j;
	printf("Enter number of names:");
	scanf("%d",&n);
	char str[n][100], c[100];
	for(i=0; i<n; i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0; i<n; i++) //converting to lower case
	{
		int len=strlen(str[i]);
		for(j=0; j<len; j++)
		{
			if(str[i][j]>64 && str[i][j]<91)
			{
				str[i][j]=str[i][j]+32;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(strcmp(str[j-1],str[j])>0)
			{
				strcpy(c,str[j-1]);
				strcpy(str[j-1],str[j]);
				strcpy(str[j],c);
			}
		}
	}
	printf("----------------------------\n");
	printf("After sort:\n");
	for(i=0; i<n; i++)
	{
		puts(str[i]);
	}
}
