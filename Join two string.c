#include <stdio.h>
#include <string.h>

int main ()

{
    char a[100];
    char b[100];
    char c[100];
    gets(a);
    gets(b);
    gets(c);
    strcat(a,b);
    strcat(a,c);
    printf("%s",a);
    return 0;
}
