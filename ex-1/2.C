#include <stdio.h>
#include<conio.h>

main()
{
	 int Num1, Num2, Num3,lowest;

	 clrscr();

	 printf("Enter First Number : ");
	 scanf("%d",&Num1);
	 printf("Enter Second Number : ");
	 scanf("%d",&Num2);
	 printf("Enter Third Number : ");
	 scanf("%d",&Num3);

	 if(Num1 < Num2)
	 {
	      if(Num1 < Num3)
	      {
		  lowest = Num1;
	      } else {
		   if(Num2 <Num3)
		   {
		   lowest = Num2;
		   }

		   else {

		  lowest = Num3;
		  }
	 }