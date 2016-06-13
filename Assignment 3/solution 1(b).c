#include<stdio.h>

int main()

{
    int a,i,result=1;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        result=result*i;
    }
    printf("%d",result);
    return 0;
}
