#include <stdio.h>
int op(int fact)
{
    if (fact == 1)
    {
        return (1);
    }
    else
    {
        return (fact * op(fact - 1));
    }
}
int main()
{
    int x;
    printf("enter the number you want factorial of ");
    scanf("%d", &x);
    int num = op(x);
    printf("the factorial is %d", num);
    return 0;
}