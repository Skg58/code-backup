#include <limits.h>
#include <stdio.h>

int main() {
    int arr[10] = {11, 8, 3, 2, 5, 6, 4, 9, 7, 10};
    int min = INT_MAX, secmin = INT_MAX;
    int max = INT_MIN, secmax = INT_MIN;

    for (int i = 0; i < 10; i++) {
        if (arr[i] < min) {
            secmin = min;
            min = arr[i];
        } else if (arr[i] < secmin) {
            secmin = arr[i];
        }

        if (arr[i] > max) {
            secmax = max;
            max = arr[i];
        } else if (arr[i] > secmax) {
            secmax = arr[i];
        }
    }
    printf("%d\n%d\n", secmin, secmax);

    return 0;
}