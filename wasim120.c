#include<stdio.h>
int main()
{
    int i=1;
    printf("Table of 5:\n");
    while(i<=10)
    {
        printf("5 X %d=%d\n",i,5*i);
        i++;
    }
    printf("\n");
    return 0;
}