#include <stdio.h>


int main() 
{
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);                    

    int a[rows][cols];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);                                
        }
    }
    printf("transpose matrix of the array:\n");
    for(int j=0;j<cols;j++)
    {
        for(int i=0;i<rows;i++)
        {
            printf("%d ",a[i][j]);
        }
        {
            printf("\n");
        }
    }
}
    