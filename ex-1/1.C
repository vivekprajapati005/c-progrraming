#include<conio.h>
#include<stdio.h>
main()
{       float a, b, ans, area;

	clrscr();

	printf("Enter value for a : ");
	scanf("%f",&a);
	printf("Enter value for b : ");
	scanf("%f",&b);

	printf("Enter value for ans");
	scanf("%f",&ans);


	// calculate area
	area =ans=(a*a)+(2*a)+(2*a*b)+(b*b);


	//print the result

	printf("The are is :.2f\n",area);


	getch();
}


