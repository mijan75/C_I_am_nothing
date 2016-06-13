#include<stdio.h>

int main()

{
    int i,j,n,space,star;
    scanf("%d",&n);
    space=0;
    star=(n*2)-1;
    for (i=1;i<n;i++)
    {
        for (j=1;j<=space;j++) printf(" ");
        for (j=1;j<=star;j++) printf("*");
        printf("\n");
        space++;
        star-=2;
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++) printf(" ");
        for (j=1;j<=star;j++) printf("*");
        printf("\n");
        space--;
        star+=2;
    }
    return 0;
}
