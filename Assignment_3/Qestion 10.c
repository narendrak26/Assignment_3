#include<stdio.h>
int main()
{
    float SP,CP,Profit,Loss;
    printf("Enter the Selling and Cost Price ");
    scanf("%f%f",&SP,&CP);
    if((SP-CP)>0)
    {
        Profit=(SP/(SP+CP))*100;
        printf("Profit Percentage is %f",Profit);

    }
    else
    {
        Loss=(CP/(SP+CP))*100;
        printf("Loss Percentage is %f",Loss);
    }
    return 0;
}
