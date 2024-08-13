#include<stdio.h>
#include<conio.h>
#define pf printf
main()
{
	    int mark;
	    clrscr();
	printf("Enter Your score ");
	scanf("%d",&mark);



	(mark<=100 && mark>90)
	? printf("Your grade is A")
	:	 (mark<90 && mark>80)
		 ? printf("Your grade is B")
		 :       (mark<80 && mark>65)
			  ? printf ("Your grade is D")
			  :        (mark<45 && mark>33)
				   ?("Your grade is E")
				   :("Your grade is F")

	  getch();
}