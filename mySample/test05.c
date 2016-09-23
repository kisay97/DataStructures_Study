#include <stdio.h>

int main()
{
  int num1 = -16;
  int num2 = num1 >> 1;
  int num3 = num1 << 1;

  printf("%d, %d, %d\n", num1, num2, num3);
  return 0;
}