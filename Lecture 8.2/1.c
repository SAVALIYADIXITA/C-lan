#include<stdio.h>

int main()
{
    int n,j;
    printf("enter size:");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)
    {
        printf("enter :a[%d]",i);
        scanf("%d",&a[i]);
    }

    int n;
    printf("enter size:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("enter :b[%d]",i);
        scanf("%d",&b[i]);
    }
    c[i]=a[i]+b[i];

    for(int i=0;i<a[i];i++)
    {
        c[i]=a[i];
    }
    for(int j=0;j<b[i];j++)
    {
        c[i]=b[i];
    }
    printf("array c is \n");
    for(int i=0;i<c;i++)
    {
        printf("%d ",c);
        if(int i<c-1)
        {
            printf(",");
        }
    }
    printf("\n");
    
}