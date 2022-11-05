#include <stdio.h>
#include <conio.h>
int main()
{
    int num[5];
    printf("enter the integers to store:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("displaying numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d\n", num[i]);
    }

    return 0;
}