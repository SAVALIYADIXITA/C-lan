#include<stdio.h>

int main()
{
    int n1=1,n2=9,n3,n;

    printf("enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i+=8)
    {
        printf("%d ",i);
    }
   
}