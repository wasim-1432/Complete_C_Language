#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        int t=1,k;
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && t)
            {
                printf("%d",k);
                j<5?k++:k--;
                t=0;
            }
            else
            {
                printf(" ");
                if(j==5)
                {
                    k--;
                }
                t=1;
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}