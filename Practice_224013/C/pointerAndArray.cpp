#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr1[]) {
    int temp = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr1[j] < arr1[i]) {
                swap(&arr1[i], &arr1[j]);
            }
        }
    }
}


int main() {
    // int arr[3] = {10, 20, 30};
    // int *p = arr;
    // for (int i = 0; i < 3; i++) {
    //     printf("%d\n", *(p + i));
    // }
    // //
    int arr1[5] = {40, 10, 30, 20, 50};
    sortArray(arr1); // tham khảo thuật toán selection sort
    for (int i = 0; i < 5; i++) {
        printf("%d-", arr1[i]);
    }
}
