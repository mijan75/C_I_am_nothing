#include <stdio.h>

int main()

{
    float c,s,p,l;
    printf("Enter the cost price and selling price\n");
    scanf("%f%f",&c,&s);
    if (s>c){
        p=s-c;
        printf("You make profit and the profit amount is : %.2f\n",p);
    }
    else if (c>s){
        l=c-s;
        printf("You make loss and the loss amount is : %.2f\n",l);
    }
    return 0;
}
