#include <stdio.h>

int main()

{
    int a;
    printf("Enter a year\n");
    scanf("%d",&a);
    if (a%4==0&&a%100!=0||a%400==0){
        printf("This is a leap year\n");
    }
    else {
        printf("This is not a leap year\n");
    }
    return 0;
}
