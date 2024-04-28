#include<stdio.h>

// Function prototype
int binsearch(int a[], int key, int low, int high);

void main() {
    int i, low, mid, high, n, key, a[100], pos;

    printf("ENTER THE NUMBER OF ELEMENTS\n");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS IN ASCENDING ORDER\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("ENTER THE KEY ELEMENT TO BE SEARCHED\n");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    pos = binsearch(a, key, low, high);

    if(pos == -1) {
        printf("ELEMENT NOT FOUND\n");
    } else {
        printf("ELEMENT %d FOUND AT THE LOCATION %d ", key, pos + 1);
    }
    getchar();
}

// Function definition
int binsearch(int a[], int key, int low, int high) {
    int mid;
    if(low > high)
        return -1;

    mid = (low + high) / 2;
    return (key == a[mid] ? mid : key < a[mid] ? binsearch(a, key, low, mid - 1) : binsearch(a, key, mid + 1, high));
}
