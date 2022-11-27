#include<stdio.h>
int main()
{

   char ch = 'a';
   printf("Enter the character ");
   scanf("%c",&ch);
   //printf("ASCII code of %c is %d ",ch,ch);
if((ch>=97)&&(ch<=122))
{
    printf("Lower case\n");
}
else if((ch>65)&&(ch<=90))
{
    printf("Upper case\n");
}
else if((ch>=47)&&(ch<=58))
{
    printf("Digit\n");

}
else
{
    printf("Special character\n");
}
    return 0;
}
