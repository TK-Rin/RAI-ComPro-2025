#include <stdio.h>

int main() {
    int array[] = { 3, 1, 2, 4, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]);
    int max_value = *array;

    for (int i = 0; i < size; i++) {
        if (*(array + i) > max_value) {
            max_value = *(array + i);
        }
    }

    printf("Max value: %d\n", max_value);

    return 0;
}
