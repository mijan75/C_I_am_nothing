#include<stdio.h>

int main()

{
    int A[100];
    int i,j,flag=0;
    for (i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    for (i=0;i<5;i++)
    {
        flag=0;

        for (j=0;j<i;j++)
        {

            if (A[i]==A[j])
            {
                flag=1;
            }
        }
        if (flag==0)
        {
            printf("%d",A[i]);
        }
    }
    return 0;
}
