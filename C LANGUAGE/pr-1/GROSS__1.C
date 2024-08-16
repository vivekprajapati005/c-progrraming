#include <stdio.h>
#include <conio.h>
main()
{
    int b, h, d, t, ans;
    clrscr();
    printf("Enter the base salary to calculate Gross Salary : ");
    scanf("%d", &b);
    printf("Enter the value of HRA: ");
    scanf("%d", &h);
    printf("Enter the value of DA: ");
    scanf("%d", &d);
    printf("Enter the value TA: ");
    scanf("%d", &t);
    ans = b + (h*b/100) + (d*b/100) + (t*b/100);
    printf("The Gross salary is %d ",ans);
    getch();
}