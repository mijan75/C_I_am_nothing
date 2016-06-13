#include<stdio.h>
#include<string.h>
int main()

{
    char arr[1000];
    int fre[256]={0};
    gets(arr);
    int i,j,l,count=0;
    l=strlen(arr);
    for (i=0;arr[i]!='\0';i++)
    {

        fre[arr[i]]++;

    }
    for (j=0;j<150;j++)
    {
        if (fre[j]!=0)
        {
            printf("%c %d\n",j,fre[j]);
        }
    }
    return 0;
}
