#include<stdio.h>
#include<conio.h>
void main()
{
	float FA,SA,TA;
	clrscr();
	printf("enter the value of FA:");
	scanf("%f",&FA);

	printf("enter the value of SA:");
	scanf("%f",&SA);

	TA=180-(FA+SA);
	printf("%.2f TA",TA);
	getch();
}