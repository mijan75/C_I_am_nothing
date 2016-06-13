#include<stdio.h>

int main()

{
    char a[100];
    char b;
    gets(a);
    scanf("%c",&b);
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]==b)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
