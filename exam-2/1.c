#include<stdio.h>
#define P printf
#define S scanf

int main()
{
    int n;
    P("enter number:");
    S("%d",&n);

    (n>=0)
        ?P("positive\n")
        :P("nagative");   
}