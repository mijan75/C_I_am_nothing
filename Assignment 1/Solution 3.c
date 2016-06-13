#include <stdio.h>

int main ()

{
    float l,h,r,a,p,s,c;
    printf ("Enter a the length,height and radius of a circle\n");
    scanf ("%f%f%f",&l,&h,&r);
    a=(l*h);
    printf ("Area : %.2f\n",a);
    p=(l+h)*2;
    printf("Perimeter : %.2f\n",p);
    s=(3.1416*r*r);
    printf ("Area of the circle : %.2f\n",s);
    c=(2*3.1416*r);
    printf("Circumference : %.2f",c);
    return 0;
}
