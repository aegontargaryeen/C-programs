#include <stdio.h>

int main()
{

  int num, b, rev = 0;
  printf("enter the number to be reversed");
  scanf("%d", &num);
  while (num != 0)
  {
    rev = (rev * 10) + (num % 10);
    num = num / 10;
  }
  printf("the reverse order is %d", rev);
  return 0;
}
