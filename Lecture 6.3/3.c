#include<stdio.h>
int main()
{
    int i=1,n=0,mul=0;

     printf("\n enter n:");
     scanf("%d ",&n);

     for(i=1; i<=10; i++)
     {  
         mul=i*n;       
         printf("%d * %d =%d \n",n,i,mul);
     } 
       
}