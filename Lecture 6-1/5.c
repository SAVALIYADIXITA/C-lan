#include<stdio.h>
int main()
{
    int y1,y2;

    printf("enter yeqr 1:");
    scanf("%d",&y1);
    printf("enter yeqr 2:");
    scanf("%d",&y2);

    while(y1<=y2)
    {
        if(y1%4==0)
        {
            printf("%d\t",y1);
        }
        y1++;

    }
}
