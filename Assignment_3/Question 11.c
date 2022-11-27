#include<stdio.h>
int main()
{
    float English ,Hindi ,Maths ,Physics ,Chemistry ,Total ,Percentage;
    printf("Enter the marks of Students ");
    scanf("%f%f%f%f%f",&English,&Hindi,&Maths,&Physics,&Chemistry);

     Total=(English + Hindi + Maths + Physics + Chemistry);

     printf("total marks of subjects is %f\n",Total);

     Percentage = (Total/500)*100;

     printf("Percentage is %f\n ",Percentage);

     if(Percentage>33)
        printf("Passed \n");

     else
     {
         printf("Failed \n");
     }
    return 0;
}
