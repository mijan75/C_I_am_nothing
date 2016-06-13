
#include<stdio.h>
int main()
{
int i=0;
char a[15][100];
while(scanf("%[^\n]", a[i]) !=EOF)
{
printf("%s", a[i]);
i++;
}
printf("%d", i);
return 0;
}
