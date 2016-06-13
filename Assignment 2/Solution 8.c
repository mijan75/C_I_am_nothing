#include <stdio.h>

int main()

{
    float a,b,c,d,e,f;
    d=60;
    e=0.7;
    f=5000;
    printf("Enter the values of of hardness,carbon content and tensile strength of the steel");
    scanf("%f%f%f",&a,&b,&c);
    if (d==a&&b==e&&c==f){
        printf("Grade is : 10\n");
    }
    else if (d==a&&b==e){
        printf("Grade is : 9\n");
    }
    else if (b==e&&c==f){
        printf("Grade is : 8\n");
    }
    else if (d==a&&c==f){
        printf("Grade is : 7\n");
    }
    else if (d==a||b==e||c==f){
        printf("Grade is : 6\n");
    }
    else {
        printf("Grade is : 5\n");
    }
    return 0;
}
