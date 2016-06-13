#include <stdio.h>

int main ()

{
    int a,b=1;
    scanf ("%d",&a);
    while (b<=a)
    {
        if (b%2==0)
        {
            b++;
            continue;

        }
        printf ("%d\n",b);
        b++;

    }
    return 0;
}
