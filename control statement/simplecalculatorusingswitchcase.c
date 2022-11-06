#include <stdio.h>

int main()
{
    int a, b;
    char n;
    printf("enter the + sign for addition - sign for subtraction / for divide and * for multiply\n");
    scanf("%c", &n);
    printf("enter any two numbers");
    scanf("%d%d", &a, &b);
    switch (n)
    {
    case '+':
        printf("the addition is %d", a + b);
        break;
    case '/':
        printf("the division is %d", a / b);
        break;
    case '*':
        printf("the multiplication is %d", a * b);
        break;
    case '-':
        printf("the subtraction is %d", a - b);
        break;

    default:
        printf("invalid option");
        break;
    }
    return 0;
}