#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("Uppercase Alphbaet");
            break;
        case 'a' ... 'z':
            printf("Lowercase Alphabet");
            break;
        default:
            printf("Other special Character");
    }
    printf("\n");
    return 0;
}