//PROGRAM 90: WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES USING POINTERS. 
#include<stdio.h>
int main()
{
	char *cptr;
	char name[100];
	int i=0, yspa=0, nspa=0;
	printf("Enter string=");
	fgets(name, sizeof(name),stdin);
	cptr=name;
	
	while(*cptr!='\n' && *cptr!='\0')
	{
		if(*cptr==' ')
		{
			yspa++;
		}
		else
		{
			yspa++;
			nspa++;
		}
		cptr++;
	}
	
	printf("String length with spaces=%d\n",cptr-name);
	printf("STring length without spaces=%d",nspa);
}

