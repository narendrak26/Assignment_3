#include<stdio.h>
int main()
{
    double a,b,c,d;
    printf("Enter the coefficient of a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);

    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Roots are real \n");
    }
    else if(d==0)
    {

        printf("Roots are equal \n");
    }
    else
        printf("Roots are imaginary");
    return 0;
}
