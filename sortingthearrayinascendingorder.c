#include <stdio.h>

int main()
{
    int temp;
    int a[5] = {21, 12, 78, 65, 32};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("displaying the numbers in ascending order:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
