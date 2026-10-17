//program 6: PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include<stdio.h>
void main ()
{
    int a,b;
    printf("enter values of ");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    //logic to swap numbers
    a=a+b;// a is now summ
    b=a-b;//b is a
    a=(a-b);//a=sum -b
    printf("a=%d , b=%d",a,b);
}
