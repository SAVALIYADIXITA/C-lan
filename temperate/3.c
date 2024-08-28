#include<stdio.h>

int main()
{
    int n,sum=0,FD,SD;

    printf("enter number:");
    scanf("%d",&n);

    SD=n%10;
    FD=n;
    while(n>=10)
    {
        n=n/10;
    }
    FD=n;
    sum=FD+SD;
    printf("sum of the first and last digit=%d\n",sum);
}