# quick_sort

Quick sort is a divide-and-conquer sorting algorithm that works by selecting a pivot element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively.

The main characteristics of quick sort are:

- It is an in-place sorting algorithm, meaning it doesn't require any extra memory to sort the elements.
- It is an efficient sorting algorithm, with an average time complexity of O(n log n).
- It is not a stable sorting algorithm, meaning it does not preserve the relative order of equal elements in the sorted array.
- The choice of pivot element can greatly affect the performance of the algorithm, with the worst-case time complexity being O(n^2) when the pivot is chosen poorly.