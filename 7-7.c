#include<stdio.h>
int main()
{
    int i=20,n;
    printf(" enter ending point:");
    scanf("%d",&n);

    while(i>=n)
    {    
        if(i%2==1)
        {        
            printf("%d ",i);
        }
        i--;
    }
}