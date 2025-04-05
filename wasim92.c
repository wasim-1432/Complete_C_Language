#include<stdio.h>
int main()
{
    int ph,ch,math,eng,hin;
    printf("Enter your five subject marks\n");
    scanf("%d%d%d%d%d",&ph,&ch,&math,&eng,&hin);
    if(ph>=33 && ch>=33 && math>=33 && eng>=33 && hin>=33)
    {
        printf("You are passed");
    }
    else
    {
        printf("Sorry! You are fail");
    }
    printf("\n");
    return 0;
}