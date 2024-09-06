#include<stdio.h>

int main()
{
    int n,i;

    printf("enter array size:");
    scanf("%d",&n);     

    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);        
    }
    printf("the squres are:");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]*a[i]);
    }
    
    

    
}