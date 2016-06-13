#include<stdio.h>

int main ()

{
    int n,r,d,
    sum1=1,sum2=1,sum3=1,result=0,i,j,k;
    scanf("%d%d",&n,&r);
    for (i=1;i<=n;i++)
    {
        sum1=sum1*i;
    }
    for (j=1;j<=r;j++)
    {
        sum2=sum2*j;
    }
    d=n-r;
    for (k=1;k<=d;k++)
    {
        sum3=sum3*k;
    }
    result=sum1/(sum2*sum3);
    printf("%d",result);
    return 0;
}
