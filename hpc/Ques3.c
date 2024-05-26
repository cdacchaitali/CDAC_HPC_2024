//Abstract : Binary Search

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
    if (low > high) {
        return -1; // Element not found
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == x) {
        return mid;
    } else if (arr[mid] < x) {
        return binarySearch(arr, mid + 1, high, x);
    } else {
        return binarySearch(arr, low, mid - 1, x);
    }
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter the number to search: ");
    scanf("%d", &x);

  int index = binarySearch(arr, 0, n - 1, x);

  if (index != -1) {
    printf("Number %d found at index %d\n", x, index);
  } else {
    printf("Number %d not found in the array\n", x);
  }

  return 0;
}	
