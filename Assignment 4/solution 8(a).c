#include<stdio.h>

int main()

{
    int i,j,n,star,space;
    scanf("%d",&n);
    space=n-1;
    star=1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++) printf(" ");
        for (j=1;j<=star;j++) printf("*");
        for (j=1;j<=space;j++) printf(" ");
        printf("\n");
        space--;
        star+=2;
    }
    return 0;
}
