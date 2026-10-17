//program 5: PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE.
#include<stdio.h>
void main ()
{
    int a,b,c;
    printf("enter the values of\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("After swap\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
}
