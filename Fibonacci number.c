#include<stdio.h>

int main()

{
    int first=0,second=1,next,i,j,row;
    scanf("%d",&row);
    for (i=0;i<row;i++)
    {
        if (i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d\n",next);
    }
    return 0;
}
