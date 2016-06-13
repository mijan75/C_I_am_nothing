#include <stdio.h>

struct record{
    char name[30];
    char phone[30];
    char email[30];
};
int main()

{
    struct record a[3];
    int i;
    for (i=0;i<3;i++)
    {
        scanf("%s",a[i].name);
        scanf("%s",a[i].phone);
        scanf("%s",a[i].email);
    }
    //for(i=0;i<3;i++)
    //{
        printf("%s\n",a[0].name);
        //printf("%s\n",a[i].phone);
        //printf("%s\n",a[i].email);
    //}
    return 0;
}
