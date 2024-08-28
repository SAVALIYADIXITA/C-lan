#include<stdio.h>

int main()
{
    int count=0,n;

    printf("enter number:");
    scanf("%d",&n);

    do
    {
        count++;
        n/=10;
    } while (n>0);
    printf(" total number of digits: %d\n",count);
    
}