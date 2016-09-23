#include <stdio.h>

int main()
{
  char name[30];

  printf("enter your name :\n");
  fgets(name, sizeof(name), stdin);

  printf("\nyour name is %s\n", name);
  return 0;
}