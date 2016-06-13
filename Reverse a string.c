#include <stdio.h>

int main ()

{
    char don[30]="Mijan",mon[30];
    int i,j=0;
    for (i=4;i>='\0';i--){
        mon[j]=don[i];
        j++;
    }
    mon[j]='\0';
    printf ("%s",mon);
    return 0;
}
