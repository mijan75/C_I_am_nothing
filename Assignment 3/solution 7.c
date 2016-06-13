 #include<stdio.h>

int main()

{
    int a,i,first=0,second=1,next=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
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
