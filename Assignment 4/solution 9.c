#include<stdio.h>
#include<string.h>
int main()

{
    char a[1000];
    int i,l=0;
    printf("Enter a String\n");
    gets(a);
    l=strlen(a);
    for (i=l-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
