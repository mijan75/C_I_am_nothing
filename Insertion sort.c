#include<stdio.h>

int main()

{
    int arr[10];
    int i,j,swap;
    for (i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i++)
    {
        swap=arr[i];
        j=i-1;
        while(j>-1&&arr[j]>swap)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=swap;
    }
    for (i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
