#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number  ");
    scanf("%d",&x);
    if((x%2)==0)
    printf("Number is even ");
    else
        printf("Number is odd");
    return 0;
}
