#include <stdio.h>
#include <conio.h>
#define  printf
main()
{
	int a, b, c;
	clrscr();
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);


	clrscr();

		if(a==b && b==c)
		{
			printf("All are equal....");
		}
		else if(a==b)  //  ==
		{
			printf("A and B are equal....");
		}
		else if(b==c)
		{
			printf("B and C are equal....");
		}
		else if(a==c)
		{
			printf("A and C are equal....");
		}

		else  //  <>
		{
			if(a<b)
			{
				if(a<c)
				{
				   printf("The minimum  value is %d",a);
				}
				else
				{
					printf("The minimum  value is %d",c);
				}
			}
			else
			{
				if(b<c)
				{
					printf("The minimum  value is %d",b);
				}
				else
				{
					printf("The minimum  value is %d",c);

				}
			}

		}
	getch();


}