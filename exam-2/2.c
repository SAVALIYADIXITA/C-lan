#include<stdio.h>

int main()
{
    int r,c;
    
    printf("enter row:");
    scanf("%d",&r);
    printf("enter column:");
    scanf("%d",&c);

    int matrix[r][c];
    printf("enter elements of the matrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d]:",i);
            scanf("%d",&matrix[i][j]);   
        }
    }
    int max=matrix[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];
            }

        }
    }
    printf("maximum number in the matrix:%d\n",max);
    
}