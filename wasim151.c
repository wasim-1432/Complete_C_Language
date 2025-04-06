#include<stdio.h>
int main()
{
    int i,s=2;
    while(s<=100)
    {
        i=2;
        while(i<=s)
        {
            if(s%i==0)
            {
                break;
            }
            i++;
        }
        if(s==i)
        {
            printf("%d ",s);
        }
        s++;
    }
    printf("\n");
    return 0;
}