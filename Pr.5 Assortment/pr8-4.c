#include <stdio.h>

int main() 
{
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nElements in the matrix are:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
    int row;
    printf("\nEnter row number: ");
    scanf("%d", &row);
    printf("Elements of row %d: ", row);
    int rowSum = 0;
    for (int j = 0; j < cols; ++j) 
    {
        
        if (j < cols - 1)
        {
            printf("%d", a[row][j]);
            rowSum += a[row][j];
        } 
            
    }
    printf("\nThe sum of row %d: %d\n", row, rowSum);

 
    int col;
    printf("\nEnter column number: ");
    scanf("%d", &col);
    printf("Elements of column %d: ", col);
    int colSum = 0;
    for (int i = 0; i < rows; ++i) 
    {
        
        if (i < rows - 1) 
        {
            printf("%d", a[i][col]);
            colSum += a[i][col];
        }
            
        
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);

    return 0;
}