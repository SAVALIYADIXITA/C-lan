#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);

        sum += a[i];
    }
    printf("the sum of array:%d",sum);


}