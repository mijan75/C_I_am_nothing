#include<stdio.h>

int main ()

{
    int i=1;
    for (i='a';i<'u';i++)
    {
        switch(i+1)
        {
            case 'a':printf("%c is a vowel\n",(char)i);
            break;
            case 'e':printf("%c is a vowel\n",(char)i);
            break;
            case 'i':printf("%c is a vowel\n",(char)i);
            break;
            case 'o':printf("%c is a vowel\n",(char)i);
            break;
            case 'u':printf("%c is a vowel\n",(char)i);
            break;
        }
    }
    return 0;
}
