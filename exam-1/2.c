#include<stdio.h>
#define P printf

int main()
{
    int day;

    P("1) monday\n");
    P("2) tuesday\n");
    P("3) wednesday\n");
    P("4) thursday\n");
    P("5) friday\n");
    P("6) satureday\n");
    P("7) sunday\n");

    switch(day)
    {
        case 1:
            P("monday\n");
        break;
        case 2:
            P("tuesday\n");
        break;
        case 3:
            P("wednesday\n");
        break;
        case 4:
            P("thursday\n");
        break;
        case 5:
            P("friday\n");
        break;
        case 6:
            P("satureday\n");
        break;
        case 7:
            P("sunday\n");
        break;
        default:
    }
}