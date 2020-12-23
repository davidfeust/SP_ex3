#include <stdio.h>

#define SIZE 50

void shift_element(int *arr, int i) {
    for (int j = i; j > 0; j--) {
        *(arr + j) = *(arr + j - 1);
    }
}

void insertion_sort(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        int temp = *(arr + i);
        for (int j = 0; j < i; ++j) {
            if (*(arr + j) > temp) {
                shift_element((arr + j), i - j);
                *(arr + j) = temp;
                break;
            }
        }
    }
}

int main() {
    int arr[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", arr + i);
    }
    insertion_sort(arr, SIZE);
    for (int i = 0; i < SIZE; ++i) {
        printf("%d,", *(arr + i));
    }
    return 0;
}