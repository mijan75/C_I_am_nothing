#include<stdio.h>

int main()

{
    int a;
    //scanf("%d",&a);
   L: printf("hsdhfh");
       while (scanf("%d",&a)==1)
    {

        if (a==2)
        {
            break;
        }
        if (a<1||a>2)
        {
            printf("1 or 2");
            continue;

        }
        if (a==1)
        {
            goto L;
        }

    }
    return 0;
}
