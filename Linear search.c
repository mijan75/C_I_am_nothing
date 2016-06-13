#include<stdio.h>

int main()

{
    int a,n,i;
    int arr[1000];
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for (i=0;i<a;i++)
    {
        if (n==arr[i])
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
