#include<stdio.h>

int main()

{
    int arr[1000];
    int a,i=0,j=0,temp=0,b;
    printf("Enter the number of element of the array\n");
    scanf("%d",&a);
    printf("Enter the element array\n");
    for (i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<a-1;i++)
    {
        for (j=i+1;j<a;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Enter the number\n");
    scanf("%d",&b);
    printf("Minimum = %d\n",arr[b-1]);
    printf("Maximum %d\n",arr[a-b]);
    return 0;
}
