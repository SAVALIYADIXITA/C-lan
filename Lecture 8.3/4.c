#include<stdio.h>

int main()
{
    int r,c;

    printf("enter the array's row size:");
    scanf("%d",&r);
    printf("enter the array's column size:");
    scanf("%d",&c);

    int a[r][c],sum=0,n;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||j==0||i==r-1||j==c-1)
            {                
                printf("%d",a[i][j]);
                sum+=a[i][j];
            }
            else
            { 
                printf(" ");
            }                               
        }
        printf("\n");
    }
    printf("the sum of diagonal elements of an array:%d ",sum);
}