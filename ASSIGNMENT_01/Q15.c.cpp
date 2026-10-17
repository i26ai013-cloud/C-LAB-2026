//program 15:PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION. 
#include<stdio.h>
int main()
{
	float p,c,m,e,h;
	float t,per;
	printf("p=");
	scanf("%f",&p);
	printf("c=");
	scanf("%f",&c);
	printf("m=");
	scanf("%f",&m);
	printf("e=");
	
	scanf("%f",&e);
	printf("h=");
	scanf("%f",&h);
	t=p+c+m+e+h;
	per=t/5.0;
	if(per>=60)
	{
		printf("A Grade");
	}
	else if(per>=60)
	{
		printf("B Grade");
	}
	else if(per>=40)
	{
		printf("C Grade");
	}
	else
	{
		printf("Grade=Fail");
	}
}
