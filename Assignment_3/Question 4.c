#include<stdio.h>
int main()
{

    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if((x&1)==1)
        printf("Number is odd");
    else
        printf("Number is even");
    return 0;
}
