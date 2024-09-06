#include<stdio.h>

void div()
{
    int a;
     printf("enter a:");
     scanf("%d",&a);

     if ((a%3==0)&&(a%5==0))
     {
        printf("divisible by 3 and 5");
     }
     else
     {
        printf("not divisible by not 3 and 5");
     }
     
}
 
 int main()
 {
    div();
 }

