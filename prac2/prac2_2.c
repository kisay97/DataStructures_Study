#include <stdio.h>

int main()
{
  char * name = malloc(20);
  int studentID;
  char * major = malloc(20);

  FILE * fread = fopen("input.txt", "r");
  FILE * fwrite = fopen("output.txt", "w");
  if (fread == NULL || fwrite == NULL)
  {
    puts("파일 오픈 실패!\n");
    return -1;
  }

  fscanf(fread, "%s\r\n%d%s", name, &studentID, major);

  printf("%s\n%d\n%s\n", name, studentID, major);
  fprintf(fwrite, "%s\r\n%d\r\n%s", name, studentID, major);

  fclose(fwrite);
  fclose(fread);

  free(name);
  free(major);
  return 0;
}