#include <stdio.h>

int main()
{
  int n, p, t;
  double r = 1.0;

  printf("number : ");
  scanf("%d", &n);
  printf("power : ");
  scanf("%d", &p);

  t = p;
  if (p > 0)
  {
    while (t--)
    {
      r *= n;
    }
  } else if (p < 0)
  {
    while (t++)
    {
      r /= n;
    }
  }

  printf("%d^%d = %lf\n", n, p, r);

  return 0;
}