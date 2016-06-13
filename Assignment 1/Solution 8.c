#include <stdio.h>

int main ()

{
    int a,b,t;
    printf ("Enter two number\n");
    scanf ("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf ("A=%d B=%d",a,b);
    return 0;
}
