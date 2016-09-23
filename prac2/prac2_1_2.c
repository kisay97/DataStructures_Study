#include <stdio.h>

int power(int n, int p);

int main()
{
  int n, p;

  printf("number : ");
  scanf("%d", &n);
  printf("power : ");
  scanf("%d", &p);

  printf("%d^%d = %d\n", n, p, power(n, p));
}

int power(int n, int p)
{
  if (p > 0)
  {
    return n * power(n, --p);
  } else
  {
    return 1;
  }
}