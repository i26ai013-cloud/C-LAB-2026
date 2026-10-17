//program 3: program to calculate gross salary
#include <stdio.h>
int main ()
{
    int gs,a,o,bs;
    printf("Basic salary=");
    scanf("%d",&bs);
    printf("Allowances=");
    scanf("%d",&a);
    printf("overtime pay=");
    scanf("%d",&o);
    gs=a+o+bs;
    printf("gross salary=%d",gs);
}
