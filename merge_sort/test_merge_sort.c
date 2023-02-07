#include "unity.h"
#include "merge_sort.h"

void test_merge_sort(void) {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int expected[] = {3, 9, 10, 27, 38, 43, 82};

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        TEST_ASSERT_EQUAL(arr[i], expected[i]);
    }
}

int main(void) {
    UnityBegin();
    RUN_TEST(test_merge_sort);
    return UnityEnd();
}
