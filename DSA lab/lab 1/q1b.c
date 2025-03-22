#include <stdio.h>

int main() {
    int a[10] = {11, 8, 3, 2, 5, 6, 4, 9, 7, 10};
    int n = 10;

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');

    return 0;
}