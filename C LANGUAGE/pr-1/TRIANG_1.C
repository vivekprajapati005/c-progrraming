#include <stdio.h>
#include <conio.h>

main()
{
    clrscr();
    float a, b, ans;
    printf("Enter the first angle: ");
    scanf("%f", a);
    printf("Enter the second angle: ");
    scanf("%f", b);
    ans = 180 - a - b;
    printf("The third angle is %.2f", ans);

    getch();
}
