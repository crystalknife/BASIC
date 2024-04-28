#include<stdio.h>

void main() {
    int i, low, mid, high, n, key, a[100];

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

    while (low <= high) {
        mid = (low + high) / 2;
        
        if (a[mid] < key) {
            low = mid + 1;
        }
        else if (a[mid] == key) {
            printf("ELEMENT %d FOUND AT LOCATION %d\n", key, mid + 1);
            break;
        }
        else {
            high = mid - 1;
        }
    }

    if (low > high) {
        printf("ELEMENT NOT FOUND\n");
    }
}
