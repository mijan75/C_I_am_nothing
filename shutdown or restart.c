#include<stdio.h>
#include<stdlib.h>

int main()
{
    char st;
    printf("DON,for shutdown Please mention(S) for restart  please mention (R)\n");
    scanf("%c",&st);
    if(st=='s' || st=='S')
    {
        system("c:\\windows\\system32\\shutdown /s");
        printf("Good bye,DON\n");
        system("pause");
    }
    else if (st=='r'||st=='R')
    {
        system("c:\\windows\\system32\\shutdown /r");
        printf("See you soon,DON\n");
        system("pause");
    }
 return(0);
}
