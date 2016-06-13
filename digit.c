#include <stdio.h>

int main ()

{
    char ch;
    printf("Enter a digit\n");
    scanf("%c",&ch);
    if (ch>='0'&&ch<='9'){
        printf("This is a digit\n");
    }
    else {
        printf("This is not a digit\n");
    }
    return 0;
}
