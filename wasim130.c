#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the table name\n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d=%d\n",n,i,n*i);
        i++;
    }
    printf("\n");
    return 0;
}