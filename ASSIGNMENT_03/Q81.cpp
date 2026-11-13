//PROGRAM 81: PROGRAM TO COUNT  LOWER CASE,UPPER CASE LETTER,DIGITS,SPECIAL SYMBOLS IN A GIVEN LINE OF TEXT. 
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, ucount=0, lcount=0, dcount=0, scount=0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	i=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>64 && str[i]<91)
		{
			ucount++;
		}
		else if(str[i]>96 && str[i]<123)
		{
			lcount++;
		}
		else if(str[i]>47 && str[i]<58)
		{
			dcount++;
		}
		else
		{
			if(str[i]>=0 && str[i]<26)
			{}
			else if(str[i]==' ')
			{
				scount++;
			}
			else
			{
				scount++;
			}
		}
		i++;
	}
	printf("symbol:lower case : %d\n",lcount);
	printf("symbol:upper case : %d\n",ucount);
	printf("symbol:digits : %d\n",dcount);
	printf("symbol:special : %d",scount);
}
