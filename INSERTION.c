#include<stdio.h>
void main()
{
    int a[20], n, i, j, temp;
    printf("ENTER THE SIZE OF THE ARRAY\n"); // Corrected prompt message
    scanf("%d", &n);

    printf("ENTER THE ARRAY ELEMENTS\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("THE SORTED ARRAY\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
