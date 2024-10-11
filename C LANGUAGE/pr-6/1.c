#include <stdio.h>

int sum(int n1, int n2)
{
    printf("Addition of %d and %d is : %d\n\n", n1, n2, n1 + n2);
}
int minus(int n1, int n2)
{
    printf("Substraction of %d and %d is : %d\n\n", n1, n2, n1 - n2);
}
int mul(int n1, int n2)
{
    printf("Multiplication of %d and %d is : %d\n\n", n1, n2, n1 * n2);
}
int divide(int n1, int n2)
{
    printf("Division of %d and %d is : %d\n\n", n1, n2, n1 / n2);
}
int mod(int n1, int n2)
{
    printf("Modules of %d and %d is : %d\n\n", n1, n2, n1 % n2);
}
// int exit(){}

void main()
{
	
    int n, n1, n2;
    do
    {

        printf("\nInput/Output:\n\n\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n\n");

        printf("Enter Your Choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1: // sum
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            sum(n1, n2);
            break;

        case 2: // minus
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            minus(n1, n2);
            break;
        case 3: // mul
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            mul(n1, n2);
            break;
        case 4: // divide
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            divide(n1, n2);
            break;
        case 5: // mod
            printf("Enter The First Number: ");
            scanf("%d", &n1);
            printf("Enter The Second Number: ");
            scanf("%d", &n2);
            mod(n1, n2);
            break;
        case 0:       // exit
            continue; // skip this expression
        }
    } while (n != 0);
}
