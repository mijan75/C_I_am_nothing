#include<stdio.h>

int main()

{
    int i,a,s=0,result=0;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        s=s+i;
        result=result+s;
    }
    printf("%d",result);
    return 0;
}
