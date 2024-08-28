#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter value:");
    scanf("%d",&i);   
    printf("enter the n:");
    scanf("%d",&n);   
    
    do
    {        
        if(i%2==0)                        
        {
            printf("%d) is even\n",i++);
        }   
        if(i%2==1)      
        {
            printf("%d) is odd\n",i++);
        }
    }while (i<=n);        
        
} 
