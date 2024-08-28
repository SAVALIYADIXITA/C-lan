#include<stdio.h>
#include<conio.h>
main()
{
	float unit,total,bill,amount;
	clrscr();
	printf("enter the unit:");
	scanf("%f,",&unit);

	if (unit>=0 && unit<=50)
	{
		amount=unit*.50;

	}
	else if(unit>=51&&unit<=150)
	{
		amount=25+((unit-50)*.75);

	}
	else if(unit>=151&&unit<=251)
	{
		amount=100+((unit-150)*1.2);

	}
	else
	{
		amount=220+((unit-250)*1.5);
	}

	total=amount*.20;
	bill=amount+total;
	printf("total bill :%.2f", bill);
	getch();

}

