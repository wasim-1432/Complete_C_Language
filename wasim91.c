#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter the cost and selling price\n");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        printf("Profit is=%f",(sp-cp)/cp*100);
    }
    else if(sp<cp)
    {
        printf("Loss is=%f",(cp-sp)/cp*100);
    }
    printf("\n");
    return 0;
}