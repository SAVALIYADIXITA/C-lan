#include<stdio.h>
int main()
{
    int i,n;

    printf("enter any number:");
    scanf("%d",&n);

    printf("even numbers between 1 to %d are:\n",n);
    i=2;
    do
    {
        printf("%d ",i);
        i+=2;
    }
    while (i<=n);
}
