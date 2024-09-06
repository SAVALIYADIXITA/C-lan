#include<stdio.h>

int main()
{
    int y1,y2,n=0;

    printf("enter the first number:");
    scanf("%d",&y1);
    printf("enter the second number:");
    scanf("%d",&y2);

    int a[y2-y1];
    for(int i=y1;i<=y2;i++)
    {   
        if(i%4==0)
        {
            a[n]=i;
            n++;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}