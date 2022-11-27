#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if((x%3)==0 && (x%2)==0)
        printf("Number is divisible by 3 and 2 is %d  ",x);
    else
        printf("Number is not divisible by 3 and 3 is %d ",x);
    return 0;
}
