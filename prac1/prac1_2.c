#include <stdio.h>

void swapper(int *arr, int pibot, int target);

int main()
{
  int arr[6], i;
  int arrLength = sizeof(arr)/sizeof(arr[0]);

  printf("enter six numbers:\n");
  for(i = 0; i < arrLength; i++)
  {
    scanf("%d", &arr[i]);
  }

  swapper(arr, 1, 4);
  swapper(arr, 2, 3);

  printf("\nyour numbers swapped are\n");
  for(i = 0; i < arrLength; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}

void swapper(int *arr, int pibot, int target)
{
  int temp = arr[pibot];
  arr[pibot] = arr[target];
  arr[target] = temp;
}