#include<stdio.h>

int cube()
{
    int n,cube=0;
    printf("enter any number:");
    scanf("%d",&n);
    cube=n*n*n;
    printf("cube is:%d\n",cube);
}
int main()
{
    cube();
    
}