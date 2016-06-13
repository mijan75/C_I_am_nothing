#include<stdio.h>

int main()

{
    int i,max;
    int ara[110];
    for (i=0;i<10;i++)
    {
        scanf("%d",&ara[i]);
    }
    max=ara[0];
    for (i=1;i<10;i++)
    {
        if (ara[i]>max)
        {
            max=ara[i];
        }
    }
    printf("%d\n",max);
    for (i=0;i<10;i++)
    {
        if (max==ara[i])
        {
            printf("%d\n",i+1);

        }

    }
    return 0;
}
