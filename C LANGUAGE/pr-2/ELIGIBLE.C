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
	? mf = 'A'
	: 	(m<=90 && m>80)
		? mf = 'B'
		:	(m<=80 && m>65)
			? mf ='C'
			:      (m<=65 && m>45)
				? mf = 'D'
				:	(m<=45 && m>33)
					? mf = 'E'
					: (mf = 'F');


	switch(mf){
		case 'f':
			pf("Your grade is F, Sorry, You failed!");
			break;
		default:
			pf("Your Grade is %c, Congratulations! You are eligible for next level",mf);
			break;
	}



	getch();



}
