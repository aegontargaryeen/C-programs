#include <stdio.h>

int main()
{

	int week;
	printf("enter the Day");
	scanf("%d", &week);

	switch (week)
	{
	case 1:
		printf("the day is sunday");
		break;

	case 2:
		printf("the day is monday");
		break;

	case 3:
		printf("the day is tuesday");
		break;

	case 4:
		printf("the day is wednesday");
		break;

	case 5:
		printf("the day is thursday");
		break;
	case 6:
		printf("the day is friday");
		break;

	case 7:
		printf("the day is saturday");
		break;

	default:
		printf("case invalid");
		break;
	}

	return 0;
}
