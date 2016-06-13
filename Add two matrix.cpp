#include<stdio.h>

int main()

{
    int A[10][10];
    int B[10][10];
    int C[10][10];
    int m,i,j,k,sum=0;
    scanf("%d",&m);
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            sum=0;
            for (k=0;k<m;k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
