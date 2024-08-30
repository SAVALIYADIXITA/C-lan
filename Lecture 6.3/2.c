#include<stdio.h>

int main()
{
    int i,n,fec=1;

    printf("enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        fec*=i;
    }
    printf("the fectorial is:%d\n",fec);
}