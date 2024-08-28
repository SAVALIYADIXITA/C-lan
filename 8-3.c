#include<stdio.h>

int main()
{

    int n;

    printf("enter size: ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)
    {
        printf("array:a [%d]",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("array:b[%d]",i);
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("array:c[%d]",i);
        scanf("%d",&c[i]);
        c[n]=a[i]+b[i];
       
    }
    {
        printf("array c is %d:\n",c[n]);
    }
}