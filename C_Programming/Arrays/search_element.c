#include<stdio.h>

// Seaching element in an array by using linear search

int main(){
  int n;
  printf("Enter the n size of an array: ");
  scanf("%d", &n);

  int arr[n];
  int length = sizeof(arr) / sizeof(arr[0]);
  printf("Enter the array values: ");
  for (int i = 0; i < length; i++){
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < length; i++){
    printf("%d\n", arr[i]);
  }

  int search;
  printf("Enter the search element: ");
  scanf("%d", &search);
//  int found = 0;         [case:2] to check the if the element is found or not

  for (int i = 0; i < length; i++){
    if (arr[i] == search){
      printf("Element found at index: %d and value is %d\n", i, arr[i]);
//      found = 1;
      break;
    }
    if(i == n - 1){
      printf("Element is not found\n");
    }
/*
    if (found == 0;){
      printf("Element is not found");
    }
*/
  }
}