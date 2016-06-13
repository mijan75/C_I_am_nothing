#include <stdio.h>

int main ()

{
    float d,m,f,i,c;
    printf ("Enter the distance in km\n");
    scanf ("%f",&d);
    m=d*1000;
    printf("Meter : %.2f\n",m);
    f=d*3280.84;
    printf("Feet : %.2f\n",f);
    i=d*39370.1;
    printf("Inches : %.2f\n",i);
    c=d*100000;
    printf("Centimeter : %.2f",c);
    return 0;
}
