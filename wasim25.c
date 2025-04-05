#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the value of cost price and selling price\n");
    scanf("%d%d",&cp,&sp);
    printf("Profit or loss is=%f",(sp-cp)*100.0/cp);
    printf("\n");
    return 0;
}