#include<stdio.h>

int main()

{
    int ara[20]={1,2,3,4,5};
    int low_index=0;
    int high_index=4;
    int mid_index;
    int num=2;
    while(low_index<=high_index)
    {
        mid_index=high_index+low_index/2;
        if(num==ara[mid_index])
        {
            break;
        }
        if(num<ara[mid_index]){
            high_index=mid_index-1;
        }
        else
        {
            low_index=mid_index+1;
        }
    }
    if (low_index>high_index)
    {
        printf("The number is n't in the ara");
    }
    else
    {
        printf("%d is the number and %dth element of the aray",ara[mid_index],mid_index);
    }
    return 0;
}
