//program : WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y .
#include<stdio.h>
int ex(int n1, int n2)
{
	int c;
	c=n1;
	n1=n2;
	n2=c;
	printf("after interchange:\n");
	printf("X=%d \nY=%d",n1,n2);
}

int main()
{
	int x,y;
	printf("X=");
	scanf("%d",&x);
	printf("Y=");
	scanf("%d",&y);
	ex(x,y);
}

