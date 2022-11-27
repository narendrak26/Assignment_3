#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number ");
    scanf("%d",&x);
    if(x>99 && x<1000)
       {
           printf(" %d Number is of three digit \n",x);

       }
       else
        printf(" %d Number is not three digit",x);
    return 0;
}
