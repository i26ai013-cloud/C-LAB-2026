//PROGRAM 82:PROGRAM TO COUNT TOTAL CHARACTER AND WORDS IN STRING. 
#include<stdio.h>
int main()
{
	char str[100];
	int i,wcount=0,chcount=0;
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			wcount++;
		}
		else
		{
			chcount++;
		}
		i++;
	}
	printf("words=%d\n",wcount+1);
	printf("characters=%d",chcount);
}
