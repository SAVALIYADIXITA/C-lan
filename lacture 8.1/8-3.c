#include<stdio.h>
int main()
{
    int n;
    printf("enter size:");
    scanf("%d",&n);

    int a[n],b[n],c[n];
    
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("enter b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d",c[i]);
    }
    {
        printf("array c is = %d+ %d =%d");
    }

    
}