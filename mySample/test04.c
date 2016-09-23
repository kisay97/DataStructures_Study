#include <stdio.h>

int main()
{
  int num1 = 0;
  int num2 = ~num1;

  printf("원래 변수 : %d\n", num1);
  printf("NOT 연산의 결과 : %d\n", num2);
  return 0;
}