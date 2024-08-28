#include<stdio.h>
int main()
{
     int i,j; 
     char A;
    for(i='A';i<='E';i++)
    {
        for(j=i;j>='A';j--)
        {
            printf("%c ",j);
        } 
        {   
            printf("\n");
        }
    }
}