#include <stdio.h>

int main() 
{
    int i;
    int n;      

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Odd Numbers from 1 to %d:\n", n);
    i = n; 
    while (i >= 1) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i--; 
    }

    return 0;
}
