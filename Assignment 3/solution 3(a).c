#include<stdio.h>

int main()

{
    int i,result=0;
    for(i=3;i<=1691;i=i+8)
    {
        result=result+i;
    }
    printf("%d",result);
    return 0;
}
