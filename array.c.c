#include<stdio.h>

int main()
{

    int n;

    printf("enter size: ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("array:a [%d]",i);
        scanf("%d",&a[i]);
    }
    {
        printf("lenth of an array:%d\n",n);
    }
}