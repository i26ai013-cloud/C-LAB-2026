//program 18:PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR. 
#include<stdio.h>
int main ()
{
	int a,b,c,g;
	printf("enter the numbers\n");
	printf("a, b, c");
	scanf("%d %d %d", &a, &b, &c );
	g = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
	printf("greatest number=%d",g);
}
