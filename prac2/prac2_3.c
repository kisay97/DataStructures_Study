#include <stdio.h>

int main()
{
  struct student
  {
    char *name;
    int studentID;
    char *major;
  };

  int i, n;

  FILE *fread = fopen("input.txt", "rt");
  FILE *fwrite = fopen("output.txt", "wt");
  if (fread == NULL || fwrite == NULL)
  {
    puts("파일 오픈 실패!\n");
    return 0;
  }

  fscanf(fread, "%d", &n);

  struct student *student = \
    (struct student *) malloc(sizeof(struct student) * n);
  for(i = 0; i < n; i++)
  {
    student[i].name = (char *) malloc(sizeof(char) * 20);
    student[i].major = (char *) malloc(sizeof(char) * 20);
  }

  printf("%d\n\n", n);
  for(i = 0; i < n; i++)
  {
    fscanf(fread, "%s%d%s",
      student[i].name, &student[i].studentID, student[i].major);
    printf("%s\n%d\n%s\n\n",
      student[i].name, student[i].studentID, student[i].major);
    fprintf(fwrite, "%s\r\n%d\r\n%s\r\n\r\n",
      student[i].name, student[i].studentID, student[i].major);
  }

  fclose(fwrite);
  fclose(fread);

  for(i = 0; i < n; i++)
  {
    free(student[i].name);
    free(student[i].major);
  }
  free(student);
  return 0;
}