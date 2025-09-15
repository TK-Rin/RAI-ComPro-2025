#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            int *a = p + j;
            int *b = p + j + 1;
            if (*a > *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
            }
        }
    }

    printf("Sorted: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}