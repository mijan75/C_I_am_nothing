#include <stdio.h>

int main ()

{
    char a[100];
    scanf("%[^\n]",a);
    int i,length=0,word=1;
    for (i=0;a[i]!='\0';i++){
        length++;
        if (a[i]==' '){
            word++;
        }

    }


    printf("%d\n",length);
    printf("%d",word);
    return 0;
}
