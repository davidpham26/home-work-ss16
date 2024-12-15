#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        arr[position] = newValue;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang truoc khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    updateElement(array, size, 10, 2);

    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

