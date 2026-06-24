//remove duplicate elements
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements left
                for(int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;   // Reduce size
                j--;   // Check same position again
            }
        }
    }

    // Print result
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}