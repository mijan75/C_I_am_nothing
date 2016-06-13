#include<stdio.h>

int main()

{
    int i,j,n,space,digit;
    scanf("%d",&n);
    space=n-1;
    digit=1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=space;j++) printf(" ");
        for (j=1;j<=digit;j++) printf("%d",j);
        for (j=digit-1;j>0;j--) printf("%d",j);
        printf("\n");
        space--;
        digit++;
    }
    return 0;
}
