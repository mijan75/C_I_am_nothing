#include<stdio.h>

int main()

{
    int a,b,c,sum=0,j;
    scanf("%d%d",&a,&b);

    if (b<=0)
    {
        while (b<=0)
        {
            scanf("%d",&c);
            b=c;
        }
        b=c;
    }
    for (j=a;j<a+b;j++)
    {
        sum=sum+j;
    }
    printf("%d\n",sum);
    return 0;
}
