#include <stdio.h>

int main ()

{
    int m;
    float a,b,c,d,e,sum;
    printf ("Enter a number of 5 digit\n");
    scanf ("%d",&m);
    a=m%10;
    m=m/10;
    b=m%10;
    m=m/10;
    c=m%10;
    m=m/10;
    d=m%10;
    m=m/10;
    e=m%10;
    sum=(a+b+c+d+e);
    printf ("Sum = %.2f",sum);
    return 0;
}
