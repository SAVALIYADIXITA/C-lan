#include<stdio.h>

int main()
{
    int n,sum=0;

    printf("enter number:");
    scanf("%d",&n);

        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
    printf("the sum of all numbers:%d\n",sum);
    
}