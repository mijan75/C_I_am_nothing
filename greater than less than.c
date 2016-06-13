#include <stdio.h>

int main ()

{
    int a;
    printf("Enter a number\n");
    scanf ("%d",&a);
    if (a>5){
        printf("%d is greater than 5",a);
    }
    else if (a>10){
        printf("%d is greater than 10",a);
    }

    return 0;
}
