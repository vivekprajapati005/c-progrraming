   #include<stdio.h>
#include<conio.h>
main()
{   int i,j;

    for(i=5; i>=1; i--)
    {
       for(j=1; j<=5 - i + 1; j++)
       {
	printf("%d",i);
       }

	   printf("\n");
    }


    getch();


}