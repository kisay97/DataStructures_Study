#include <stdio.h>

struct student
{
  char *name;
  int studentID;
  char *major;
};

int main()
{
  struct student *students = NULL;
  int n;
  int i;

  puts("enter the number of students and their name,ID, and major:");
  scanf("%d", &n);

  students = (struct student*) malloc(sizeof(struct student) * n);

  for(i = 0; i < n; i++)
  {
    students[i].name = (char*) malloc((2 * sizeof(char)) + 1);
    students[i].major = (char*) malloc((2 * sizeof(char)) + 1);
    scanf("%s %d %s", 
      students[i].name, &students[i].studentID, students[i].major);
  }

  puts("the information you entered");
  for(i = 0; i < n; i++)
  {
    printf("%s %d %s\n", 
      students[i].name, students[i].studentID, students[i].major);
  }

  return 0;
}