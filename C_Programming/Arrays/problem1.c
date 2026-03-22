#include <stdio.h>

int main()
{
  int n, i;
  printf("Enter n value:\n");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the array values: \n");

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Array values are: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}