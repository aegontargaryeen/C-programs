#include <stdio.h>
#include <conio.h>
int main()
{
	int n;
	do
	{
		printf("please proceed forward to enter the numbers");
		scanf("%d", &n);

		if (n % 2 != 0)
		{
			break;
		}

	} while (1);
	printf("thank you for entering odd number.\n");

	return 0;
}
