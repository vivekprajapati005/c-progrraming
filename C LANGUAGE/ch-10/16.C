#include<stdio.h>
#include<conio.h>
main()
{
	 int i,j;
	 clrscr();
	 for(i=5; i>=1; i--)
	 {
	 for(j=i; j>=1; j--)
	 {
	 (j%2==0)
		? printf("0")
		: printf("1");
	 } printf("\n");

	 }

	 getch();

}
