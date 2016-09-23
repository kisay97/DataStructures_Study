#include <stdio.h>

int main()
{
  char *name[3];
  int name_arr = sizeof(name) / sizeof(char *);
  int i;

  for(i = 0; i < name_arr; i++)
  {
    name[i] = malloc((4 * sizeof(char)) + 1);
  }

  puts("enter three names:");
  for(i = 0; i < 3; i++)
  {
    gets(name[i]);
  }

  puts("the names you entered");
  for(i = 0; i < name_arr; i++)
  {
     printf("%s\n", name[i]);
  }

  for(i = 0; i < name_arr; i++)
  {
    free(name[i]);
  }
  return 0;
}