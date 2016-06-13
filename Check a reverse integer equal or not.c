#include<stdio.h>

int main()

{
    int a,b=0,rem,re=0,sum=0;
    scanf("%d",&a);

    while(a!=0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
        re=(re*10)+rem;
        b++;
    }
    printf("%d %d %d\n",sum,re,b);
    if (re=a)
    {
        printf("This is equal\n");
    }
    else
    {
        printf("This is not equal");
    }
    return 0;
}
