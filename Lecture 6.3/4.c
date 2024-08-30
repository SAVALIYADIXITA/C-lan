#include<stdio.h>

int main()
{
    int i,n;

    printf("enter number:");
    scanf("%d",&n);

    printf("fectors of %d are :",n);

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}