#include <stdio.h>

int main()

{
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    if (a>=80){
        printf("You grade is : A+\n");
    }else if (a>=75&&a<=79){
        printf("You grade is : A\n");
    }else if (a>=70&&a<=74){
        printf("You grade is : A-\n");
    }else if (a>=65&&a<=69){
        printf("You grade is : B+\n");
    }else if (a>=60&&a<=64){
        printf("You grade is : B\n");
    }else if (a>=55&&a<=59){
        printf("You grade is : B-\n");
    }else if (a>=50&&a<=54){
        printf("You grade is : C+\n");
    }else if (a>=45&&a<=49){
        printf("You grade is : C\n");
    }else if (a>=40&&a<=44){
        printf("You grade is : D\n");
    }else{
        printf("Your grade is :F\n");
    }
    return 0;
}
