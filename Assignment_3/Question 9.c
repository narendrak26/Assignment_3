#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the 3 number ");
    scanf("%d%d%d",&x,&y,&z);

    if((x>y)&&(x>z))
    {
        printf("%d is Greater number ",x);
        }
        else if((y>x)&&(y>z))
        {
            printf("%d is Greater number ",y);
        }
        else if((x==y)||(y==z)||(x==z))
        {
            printf("Greater number is representd");
        }
        else
        {
            printf("%d is Greater number ",z);
        }
        return 0;
}
