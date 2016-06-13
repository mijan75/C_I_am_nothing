#include <stdio.h>
int main()
{
char don[110];
gets(don);
int i=0,j;
for(j=0;don[j]!='\0';j++);
for(i=0;i<j;i++)
{
    if (don[i]>=65&&don[i]<=90)
    {
        don[i]='a'+(don[i]-'A');
    }
    else if(don[i]>=97&&don[i]<=122)
    {
        don[i]='A'+(don[i]-'a');
    }
}
printf("%s\n",don);
return 0;
}
