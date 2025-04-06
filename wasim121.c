#include<stdio.h>
int main()
{
    int a;
    printf("Enter the size\n");
    scanf("%d",&a);
    while(a)
    {
        printf("Galgotias College\n",a--);
    }
    printf("\n");
    return 0;
}