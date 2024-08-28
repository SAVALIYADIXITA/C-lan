#include<stdio.h>

int main()
{
    char a='A';
    printf("alphabets from A-Z are:\n");
    do
    {
        printf("%c ",a);
        a+= 4;
    } 
    while (a<='Z');
    
    
}