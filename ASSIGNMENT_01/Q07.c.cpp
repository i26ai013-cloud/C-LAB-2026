//program 7: PROGRAM TO CALCULATE AREA OF A TRIANGLE.
#include<stdio.h>
void main ()
{
    float b,h,a;
    printf("enter the values of\n");
    printf("base=");
    scanf("%f",&b);
    printf("height=");
    scanf("%f",&h);
    a=(b*h)/2.0;
    printf("area=%.2f%ssq units",a);
}
