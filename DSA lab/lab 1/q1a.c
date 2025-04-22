#include <stdio.h>
#include<limits.h>

int main() {
    int a[10] = {11, 8, 3, 2, 5, 6, 4, 9, 7, 10};

    int tempmax = INT_MIN ;
    int tempmin = INT_MAX;
    for (int i = 0; i < 10; i++) {
        if (a[i] > tempmax) {
            tempmax = a[i];
        }
        if (a[i] < tempmin) {
            tempmin = a[i];
        }
    }
    printf("%d\n%d\n", tempmax, tempmin);

    return 0;
}