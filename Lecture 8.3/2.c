#include<stdio.h>

int main()
{
    int r,c;

    printf("enter the array's row size:");
    scanf("%d",&r);
    printf("enter the array's column size:");
    scanf("%d",&c);

    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);            
        }
    }
    int b[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);            
        }
    }
    
    printf("array c is:\n");
    int C[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            C[i][j]=a[i][j]+b[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}