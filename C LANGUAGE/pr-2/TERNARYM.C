#include<stdio.h>
#include<conio.h>
#define pf printf
main(){

	int mark;
	clrscr();

	pf("Enter your Score: ");
	scanf("%d",&mark);



	(mark<=100 && mark>90)
	? pf("Your grade is A")
	: 	(mark<=90 && mark>80)
		? pf("Your grade is B")
		:	(mark<=80 && mark>65)
			? pf("Your grade is C")
			:      (mark<=65 && mark>45)
				? pf("Your grade is D")
				:	(mark<=45 && mark>33)
					? pf("Your grade is E")
					: pf("Your Grade is F");

	getch();
	//que-1



}