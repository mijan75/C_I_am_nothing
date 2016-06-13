#include <stdio.h>

int main ()

{
    int m;
    float a,b,c,d,e,sum;
    printf ("Enter a number of 4 digit\n");
    scanf ("%d",&m);
    a=m%10;
    m=m/10;
    b=m%10;
    m=m/10;
    c=m%10;
    m=m/10;
    d=m%10;
    sum=(a+d);
    printf ("Sum = %.2f",sum);
    return 0;
}
