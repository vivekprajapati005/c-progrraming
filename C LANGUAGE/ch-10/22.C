#include<stdio.h>
#include<conio.h>
main()
{   		 int i,j,v=65;
		 clrscr();
		 for(i=65; i<=69; i++)
		 {
			for(j=65; j<=i; j++,v++)
			{
			  printf("%c",v);
			}
			printf("\n");
		 }

		  getch();

}