#include<stdio.h>

int main()

{
    int a,i=1,sum=0;
    scanf("%d",&a);
    for(i;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);

    }
    return 0;
}
