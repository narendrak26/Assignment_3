#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    if(x>0)
    {

        printf(" Number is Positive");
}
else if(x==0)
{

    printf("Number is Negative");
}
else
    printf("Number is Zero");
return 0;
}
