#include<stdio.h>

int main()
{
    int n,c=0;

    printf("enter number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            c++;
        }
        (c==2)
            ?printf("\n this number is prime")
            :printf("\n this number is not prime");
    }
}
