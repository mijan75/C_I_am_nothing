#include <stdio.h>

int main ()

{
    float f,c;
    printf("Enter the temperature in fahrenheit\n");
    scanf ("%f",&f);
    c=(f-32)/1.8;
    printf("The temperature in centigrade is : %.2f",c);
    return 0;
}
