#include<stdio.h>

int main()

{
    int i,result=1;
    for (i=2;i<=37;i=i+5)
    {
        result=result*i;
    }
    printf("%d",result);
    return 0;
}
