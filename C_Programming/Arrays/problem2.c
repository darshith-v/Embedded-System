#include <stdio.h>

int main()
{
  int arr[5] = {4, 5, 6, 7, 8};
  int length = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;

  for (int i = 0; i < length; i++)
  {
    sum = sum + arr[i];
  }

  printf("The sum of the array is : %d\n", sum);
  return 0;
}