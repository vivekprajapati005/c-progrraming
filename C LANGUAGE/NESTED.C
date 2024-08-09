#include <stdio.h>
#include <conio.h>
#define bol printf
main()
{
	int a, b, c;
	clrscr();
	bol("Enter the value of A:");
	scanf("%d",&a);
	bol("Enter the value of B:");
	scanf("%d",&b);
	bol("Enter the value of C:");
	scanf("%d",&c);


	clrscr();

		if(a==b && b==c)
		{
			bol("All are equal....");
		}
		else if(a==b)  //  ==
		{
			bol("A and B are equal....");
		}
		else if(b==c)
		{
			bol("B and C are equal....");
		}
		else if(a==c)
		{
			bol("A and C are equal....");
		}

		else  //  <>
		{
			if(a<b)
			{
				if(a<c)
				{
				   bol("The minimum  value is %d",a);
				}
				else
				{
					bol("The minimum  value is %d",c);
				}
			}
			else
			{
				if(b<c)
				{
					bol("The minimum  value is %d",b);
				}
				else
				{
					bol("The minimum  value is %d",c);

				}
			}

		}
	getch();


}