#include<stdio.h>

int main()

{
    int i,j,k,n,star,inter_space,space;
    scanf("%d",&n);
    space=n-1;
    inter_space=0;
    star=(2*n)-1;
    for (i=1;i<n;i++)
    {
        for (j=1;j<=space;j++) printf(" ");
        printf("*");
        for (j=1;j<=inter_space;j++) printf(" ");
        if (i!=1)
        {
            printf("*");
        }
        printf("\n");
        space--;
        inter_space+=2;
    }
    for (k=1;k<=star;k++)
    {
        printf("*");
    }
    return 0;

}
