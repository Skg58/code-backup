#include <stdio.h>

void printarray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partition(int *a, int low, int high) {
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do {
        while (a[i] <= pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);//ek  bar to karna hi hai so do-while

    // Swap A[low] and A[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void Quicksort(int *a, int low, int high) {
    int partitionindex;  // Index of pivot after partition
    if (low < high) /* this condition for atleast two element should present
                    during partition*/
    {
        partitionindex = partition(a, low, high);
        Quicksort(a, low, partitionindex - 1);   // sort left subarray
        Quicksort(a, partitionindex + 1, high);  // sort right subarray
    }
}

int main() {
    int A[] = {9, 4, 4, 8, 7, 5, 6};
    int n = 7;
    printarray(A, n);
    Quicksort(A, 0, n - 1);
    printarray(A, n);

    return 0;
}