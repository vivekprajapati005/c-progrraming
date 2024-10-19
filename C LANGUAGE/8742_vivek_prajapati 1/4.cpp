#include <stdio.h>

main()
{
	int mark;
	
	printf("Enter Your mark : ");
	scanf("%d",&mark);
	
	if (mark>=90)
	{
		printf("Grade A");
	}
	
	else if (mark>=80)
	{
		printf("Grade b");
	}
	
	else if (mark>=70)
	{
		printf("Grade c");
	}
	
	else if (mark>=60)
	{
		printf("Grade d");
	}
	
	else if (mark>=40)
	{
		printf("Grade e");
	}
	else if (mark<=40)
	{
		printf("Your fail...");
	}
}
