#include<stdio.h>

int main()


{
    double i,j=0,a,sum=0,f=1;
    scanf("%lf",&a);
    for (i=1;i<=a;i++)
    {
        f=f*i;
        j=i*i;
        sum=sum+(j/f);
    }
    printf("%.2lf",sum);
    return 0;
}
