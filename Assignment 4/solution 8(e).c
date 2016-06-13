#include<stdio.h>

int main ()

{
    int i,j,k,col,row;
    scanf("%d%d",&col,&row);
    for (i=1;i<=col;i++)
    {
        printf("*");
    }
    printf("\n");
    for (j=1;j<=row-2;j++)
    {
        printf("*");
        for (k=1;k<=col-2;k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (i=1;i<=col;i++)
    {
        printf("*");
    }
    return 0;
}
