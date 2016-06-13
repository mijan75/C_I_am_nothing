#include<stdio.h>
#include<math.h>

int main()

{
    int i,a,sum=0,c=5;
    for (i=1;i<=75;i++)
    {
        sum=sum+pow(-1,i+1)*(c);
        c=c+6;

    }
    printf("%d",sum);
    return 0;
}
