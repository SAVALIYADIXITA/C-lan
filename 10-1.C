#include<stdio.h>
 int main()
 {
    int n;

    printf("enter array size:");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]=",i);
        scanf("%d",&a[i]);
    }
    

    printf("square of %d=%d\n",a,a[i]*a[i]*a[i]);
 }

