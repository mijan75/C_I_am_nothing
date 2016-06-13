#include <stdio.h>

int main ()

{
    char don[30],don1[30];
    printf("Enter the first string\n");
    scanf("%s",don);
    printf("Enter the second string\n");
    scanf("%s",don1);
    int i=0,j=0,don3=0;
    for (i;don[i]!='\0';i++){
        don3=don3+1;
    }
    for (j=0;don1[j]!='\0';j++){
        don[don3]=don1[j];
        don3=don3+1;
        i++;
    }
    don[i]='\0';
    printf("%s",don);
    return 0;
}
