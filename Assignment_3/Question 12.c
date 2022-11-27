#include<stdio.h>
int main()
{
char ch;
printf("Enter the character ");
scanf("%c",&ch);
if((ch>='A')&&(ch<='z'))
{
    printf("Upper case\n");

}
else
{
    printf("Lower case\n");
}
return 0;
}
