#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if((x%3)==0&&(x%7)==0)

        printf("Number is divisible by 3 and 7 is %d ",x);
    else
            printf("Number is not divisible by 3 and 7 %d ",x);
    return 0;

}
