#include<stdio.h>

int main()
{
    int i=1,n;
    printf("enter number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d)hello world..\n",i);
        i++;        
    }
}