#include <stdio.h>
#include <conio.h>
#define pf printf

main(){
	int m;
	char mf;
	clrscr();
	pf("Enter Your score:");
	scanf("%d",&m);

	(m<=100 && m>90)
	? mf = 'a'
	: 	(m<=90 && m>80)
		? mf = 'b'
		:	(m<=80 && m>65)
			? mf ='c'
			:      (m<=65 && m>45)
				? mf = 'd'
				:	(m<=45 && m>33)
					? mf = 'e'
					: (mf = 'f');


	switch(mf){
		case 'a':
			pf("Your grade is A, Excellent Work!");
			break;
		case 'b':
			pf("Your Grade is B, Well Done!");
			break;
		case 'c':
			pf("Your Grade is C, Good Job!");
			break;
		case 'd':
			pf("Your grade is D, Nice!");
			break;
		case 'e':
			pf("Your grade is E, You passed, but you Could do better ");
			break;
		case 'f':
			pf("Your grade is F, Sorry, You failed!");
			break;
		default:
			pf("Invalid Input!");
			break;
	}



	getch();



}









