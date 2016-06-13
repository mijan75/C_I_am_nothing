#include<stdio.h>
#include<string.h>

int main()

{
    char p[30];
    float a,b;
    int i;
    printf("Enter your name :");
    gets(p);
    printf("%s,Please Enter two number to check you are drunk or not\n",p);
    scanf("%f%f",&a,&b);
    printf("Enter your answer : %.2f+%.2f=",a,b);
    float answer;
    scanf("%f",&answer);
    if (answer==a+b)
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Enter your answer : %.2f-%.2f=",a,b);
    float answer2;
    scanf("%f",&answer2);
    if (answer2==a-b)
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Enter your answer : %.2f*%.2f=",a,b);
    float answer3;
    scanf("%f",&answer3);
    if (answer3==a*b)
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Enter your answer : %.2f/%.2f=",a,b);
    float answer4;
    scanf("%f",&answer4);
    if (answer4==a/b)
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("%s,Do you want to check your result?\nIf want press (1) or press (2)\n",p);
    int x;
    scanf("%d",&x);
    if (x==1)
    {
        if (answer==a+b&&answer2==a-b&&answer3==a*b&&answer4==a/b)
        {
            printf("You are not drunk\n");
            printf("Thank you for using my app\n");
        }
        else if ((answer==a+b&&answer2==a-b&&answer3==a*b)||(answer2==a-b&&answer3==a*b&&answer4==a/b)||(answer==a+b&&answer2==a-b&&answer4==a/b)||(answer==a+b&&answer3==a*b&&answer4==a/b))
        {
            printf("You are 30 percent drunk\n");
            printf("Thank you for using my app\n");
        }
        else if ((answer==a+b&&answer2==a-b)||(answer==a+b&&answer3==a-b)||(answer==a+b&&answer4==a-b)||(answer2==a+b&&answer3==a-b)||(answer2==a+b&&answer4==a-b)||(answer3==a+b&&answer4==a-b))
        {
            printf("You are 50 percent drunk\n");
            printf("Thank you for using my app\n");
        }
        else if (answer==a+b||answer2==a-b||answer3==a*b||answer4==a/b)
        {
            printf("You are 70 percent drunk\n");
            printf("Thank you for using my app\n");
        }
        else
        {
            printf("You are fully drunk!!!Please take a lemon\n");
            printf("Thank you for using my app\n");
        }
    }



    if (x==2)
    {
        printf("Ok %s,you can try another test,Do you want?\nIf want then press (1) or for exit press (2)\n",p);
        scanf("%d",&i);
        if (i==1)
        {
            printf("Please Enter your name again\n");
            char q[30];
            scanf("%s",q);
            if (strcmp(p,q)==0)
            {
            printf("Congratz %s!!! You are ok\n",q);
            printf("Thank you for using my app");
            }
            else
            {
            printf("%s You are drunk\n",p);
            printf("Thank you for using my app");
            }
        }
    }
    return 0;
}
