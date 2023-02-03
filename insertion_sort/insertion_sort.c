#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j   = i - 1;

    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j          = j - 1;
    }
    arr[j + 1] = key;
  }
}

// Function to print an array
void printArray(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[] = {13, 12, 11, 5, 6};
  int n     = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: \n");
  printArray(arr, n);

  clock_t start = clock();
  insertionSort(arr, n);
  clock_t end = clock();

  double time_spent = (double) (end - start) / CLOCKS_PER_SEC;
  printf("Sorting time: %f seconds\n", time_spent);

  printf("Sorted array: \n");
  printArray(arr, n);

  return 0;
}
