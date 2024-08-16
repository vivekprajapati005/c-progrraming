#include <stdio.h>
#include <conio.h>

main()
{
    int c, ans;
    clrscr();
    printf("enter the degree in celsius : ");
    scanf("%d", &c);

    ans = (9 / 5 * c) + 32;
    printf("the converted temperature is %d F", ans);

    getch();
}