#include <stdio.h>

int minimum(int x,int y)
{

int temp;
if (x<y){

    temp=x;
}
    else {
        temp=y;
    }
    return temp;
}

int maximum(int x,int y)
{
    int mon;
    if (x>y){
        mon=x;
    }
    else{
        mon=y;
    }
    return mon;
}

int main ()

{
    int a,b,c,m1,m2,c1,c2;
    printf ("Enter three number\n");
    scanf ("%d%d%d",&a,&b,&c);
    m1=minimum(a,b);
    m2=minimum(m1,c);
    c1=maximum(a,b);
    c2=maximum(c1,c);
    printf ("The smaller number is : %d\n",m2);
    printf ("The maximum number is : %d",c2);
    return 0;
}
