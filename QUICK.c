#include <stdio.h>

void quicksort(int a[], int low, int high);
int partition(int a[], int low, int high);

void main() {
    int a[50], n, i, j;
    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);

    printf("ENTER THE ARRAY ELEMENTS\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);
    printf("ARRAY AFTER SORTING\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int j = partition(a, low, high);
        quicksort(a, low, j - 1);
        quicksort(a, j + 1, high);
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while (i <= j) {
        while (a[i] <= pivot && i <= high) {
            i++;
        }
        while (a[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } else {
            break;
        }
    }

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
