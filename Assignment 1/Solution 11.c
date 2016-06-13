#include <stdio.h>

int main ()

{
    int m;
    float a,b,c,d,e;
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
    printf ("Reverse :%.f%.f%.f%.f%.f",a,b,c,d,e);
    return 0;
}

