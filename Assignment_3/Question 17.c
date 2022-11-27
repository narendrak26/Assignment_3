#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the sides of Triangle\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x+y)>z)
    {
    printf("Triangle is valid ");
    }
    else if((y+z)>x)
    {
        printf("Triangle is valid");

    }
    else if((z+x)>y)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
}
