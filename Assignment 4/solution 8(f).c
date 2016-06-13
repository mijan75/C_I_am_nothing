#include<stdio.h>

int main()

{
    int i,j,k,col,row,digit;
    scanf("%d%d",&col,&row);
    digit=col-2;
    for (i=1;i<=digit;i++) printf("%d",i);
    for (i=digit-1;i>0;i--) printf("%d",i);
    printf("\n");
    for (j=1;j<=row-2;j++)
    {
        printf("%d",1);
        for (k=1;k<=col-2;k++)
        {
            printf(" ");
        }
        printf("%d\n",1);
    }
    for (i=1;i<=digit;i++) printf("%d",i);
    for (i=digit-1;i>0;i--) printf("%d",i);
    return 0;
}
