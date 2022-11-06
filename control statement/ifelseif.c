#include <stdio.h>

int main()
{
    int character;
    printf("Enter the character");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z')
    {
        printf("the entered character is uppercase");
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("the entered character is lowercase");
    }
    else
    {
        printf("the entered character is lowercase");
    }
    return 0;
}
