#include <stdio.h>

int addition(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int var1, var2;
    printf("enter the numbers");
    scanf("%d%d", &var1, &var2);
    int any = addition(var1, var2);
    printf("the sum is %d", any);
    return 0;
}
