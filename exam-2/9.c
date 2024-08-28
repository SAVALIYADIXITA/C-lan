#include<stdio.h>

int main()
{
    float per;
    printf("enter your percentage:");
    scanf("%f",&per);

    if(per>=90)
    {
        printf("grade='a'");
    }
    else if (per>=80)
    {
         printf("grade='b'");   
    }
    else if (per>=70)
    {
         printf("grade='c'");   
    }
    else if (per>=60)
    {
         printf("grade='d'");   
    }
    else if (per>=40)
    {
         printf("grade='e'");   
    }
    else if (per<=40)
    {
         printf("grade='fail'");   
    }
    
        
}
