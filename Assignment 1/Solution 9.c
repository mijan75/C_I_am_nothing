#include <stdio.h>

int main ()

{
    float a,b,c,d,e,t,p;
    printf ("Enter the five subject marks of a student\n");
    scanf ("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t=(a+b+c+d+e);
    printf ("Aggregate Marks : %.2f\n",t);
    p=t*100/500;
    printf ("Percentage Marks is : %.2f\n",p);
    return 0;
}
