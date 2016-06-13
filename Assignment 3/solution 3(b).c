#include<stdio.h>

int main()

{
    int i,s=-6,result=0;
    for (i=1;i<=100;i++)
    {
        s=s+13;
        result=result+s;
    }
    printf("%d",result);
    return 0;
}
