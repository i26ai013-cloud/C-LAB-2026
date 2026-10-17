#include<stdio.h>


int main()
{
    int n, i, max, smax, a[101];

    printf("Enter the number of elements (1 to 100)=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    max = smax = a[1];

    for(i=2; i<=n; i++){
        if(a[i] > max)
        {
            smax = max;   
            max = a[i];   
		}
        
        else if(a[i] > smax && a[i] < max)
        {
            smax = a[i];  
        }
    }

    printf("max=%d  second max=%d", max, smax);
}

