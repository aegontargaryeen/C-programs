/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("enter the numbers");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the greatest", num1);
        }
        else
        {
            ("%d is greatest", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is greatest", num2);
        }
        else
        {
            printf("%d is greatest", num3);
        }
    }
    return 0;
}

