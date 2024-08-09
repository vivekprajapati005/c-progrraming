#include <stdio.h>
#include <conio.h>

main()
{
	int x, y;
	clrscr();
	printf("Press 1 for English\nPress 2 for hindi\nPress 3 for Gujarati\n");
	printf("Enter your choice: ");
	scanf("%d,", &x);
	clrscr();
	switch (x)
	{
	case 1:
		printf("Press 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
		printf("Enter your choice: ");
		scanf("%d,", &y);

		switch (y)
		{
		case 1:
			clrscr();
			printf("Your Recharge Has been Done Succesfully");

		case 2:
			clrscr();
			printf("You have successfully done a Top-up Recharge");

		case 3:
			clrscr();
			printf("You have successfully done a Special Recharge");

		default:
			printf("Invalid Input..");
		}
	case 2:
		printf("Internet recharge ke liye 1 dabaiye\nTp-up recharge ke liye 2 dabaiye\nSpecial recharge ke liye 3 dabaiye\n");
		printf("Enter your choice");
		scanf("%d", &y);
		switch (y)
		{
		case 1:
			clrscr();
			printf("Aapne safaltapurvak Internet Recharge kar liya he");
			break;
		case 2:
			clrscr();
			printf("Aapne safaltapurvak Top-up Recharge kar liya he");
		case 3:
			clrscr();
			printf("Aapne safaltapurvak Special Recharge kar liya he");
		default:
			clrscr();
			printf("Invalid Input..");
		}
		break;
	case 3:
		printf("Internet Recharge mate 1 dabavo\n");
		printf("Top-up rechare mate 2 dabavo\n");
		printf("Special recharge mate 3 dabavo\n");
		printf("Enter your choice");
		scanf("%d", &y);

		switch (y)
		case 1:
			clrscr();
			printf("Tame safaltapurvak Internet Recharge karyu chhe.");
			break;
		case 2:
			clrscr();
			printf("Tame safaltapurvak Top-up recharge karyu chhe.");
			break;
		case 3:
			clrscr();
			printf("Tame safaltapurvak Special Recharge karyu chhe.");
			break;
	}
}