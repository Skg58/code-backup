#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int size) {
    int min, temp;
    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(&arr[i], &arr[min]);
        }
    }
}

void InsertionSort(int arr[], int size) {
    int temp, j;
    for (int i = 0; i < size; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

void Bubblesort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void Merge(int arr[], int low, int mid, int high) {
    int size = high - low + 1;
    int Arr2[size];
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            Arr2[k] = arr[i];
            k++, i++;
        } else {
            Arr2[k] = arr[j];
            k++, j++;
        }
    }
    while (i <= mid) {
        Arr2[k] = arr[i];
        k++, i++;
    }
    while (j <= high) {
        Arr2[k] = arr[j];
        k++, j++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = Arr2[i];
    }
}
void MergeSort(int arr[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
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
            swap(&a[i], &a[j]);
        }
    } while (i < j);

    swap(&a[low], &a[j]);

    return j;
}
void Quicksort(int *a, int low, int high) {
   
    if (low < high) {
      int  partitionindex = partition(a, low, high);
        Quicksort(a, low, partitionindex - 1);
        Quicksort(a, partitionindex + 1, high);
    }
}

int main() {
    int size = 5;
    int arr[] = {13, 52, 23, 24, 34};
    // SelectionSort(arr, 5);
    // InsertionSort(arr, 5);
    // Bubblesort(arr, 5);
    // MergeSort(arr,0,size-1);
    Quicksort(arr, 0, size - 1);
    printArray(arr, 5);
    return 0;
}