#include <stdio.h>

int main ()

{
    int  table[100][100];
    int i,j,n;
    printf ("Enter a number\n");
    for (i=1;i<=100;i++){
        for (j=1;j<=100;j++){
            table[i-1][j-1]=i*j;
        }
    }

    scanf ("%d",&n);
    for (i=1;i<=10;i++){
        printf ("%d*%d=%d\n",n,i,table[n-1][i-1]);
    }
    return 0;
}
