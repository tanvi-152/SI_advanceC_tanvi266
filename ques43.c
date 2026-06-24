//Rotate an array left or right by N positions(to the particular element).
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    k = k % n; // handle large k

    for(int r = 0; r < k; r++) {
        int last = arr[n - 1];

        for(int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }

    printf("Array after right rotation:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}