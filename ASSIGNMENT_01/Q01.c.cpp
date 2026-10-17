// Program 1: program to calculate simple interest.
#include <stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the value of\n");
    printf("p=");
    scanf("%f",&p);
    printf("r=");
    scanf("%f",&r);
    printf("t=");
    scanf("%f",&t);
    si=p*r*t/100.0;
    printf("si=%f",si);
}
