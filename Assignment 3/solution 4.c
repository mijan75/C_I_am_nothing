#include<stdio.h>

int main()

{
    int a,b,i,j,flag=0;
    scanf("%d%d",&a,&b);
    for (i=a;i<=b;i++)
    {
        flag=1;
        for (j=2;j<=i/2;j++)
        {
            if (i%j==0)
            {
                flag=0;
            }
        }
        if (flag==1&&flag!=i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
