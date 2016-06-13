#include<stdio.h>

int main()

{
    char a[10];
    gets(a);
    int i,sum=0;
    for (i=0;a[i]!='\0';++i);

    printf("%d",i);
    return 0;
}
