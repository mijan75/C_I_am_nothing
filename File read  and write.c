#include<stdio.h>

int main()

{
    FILE *mim,*mijan;
    mim=fopen("in.txt","r");
    mijan=fopen("out.txt","w");
    int a,b,s;
    fscanf(mim,"%d%d",&a,&b);
    s=a+b;
    fprintf(mijan,"%d",s);

    return 0;
}
