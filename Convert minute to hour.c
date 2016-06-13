#include<stdio.h>

int main()

{
    int a,m,h,s,k;
    scanf("%d",&a);
    m=a/60;
    s=a-(m*60);
    h=m/60;
    k=m-(h*60);
    printf("%d %d %d",h,k,s);
    return 0;
}
