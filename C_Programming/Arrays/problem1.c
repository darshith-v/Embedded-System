#include<stdio.h>

int main(){
  int n;
  printf("Enter the size of an array: \n");
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  printf("Array Elements are : \n");

  for (int i = 0; i < n; i++){
    printf("%d\n", arr[i]);
  }
  return 0;
}