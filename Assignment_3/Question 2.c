#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number   ");
    scanf("%d",&x);
    if((x%5)==0)
    {
        printf("Number is divisible \n");
    }
    else
    {

        printf("Number is not divisible \n");

    }
    return 0;
}
