#include <stdio.h>

int main ()

{
    float r,a,b,t,g;
    printf ("Enter the basic salary of Rahim\n");
    scanf ("%f",&r);
    a=(r*30)/100;
    b=(r*5)/100;
    t=1000;
    g=r-(a+b+t);
    printf ("Gross salary : %.2f",g);
    return 0;
}
