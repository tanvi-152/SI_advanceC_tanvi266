//Sort a set of strings in alphabetical order.
#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // to consume newline

    char str[n][100], temp[100];

    // Input strings
    printf("Enter strings:\n");
    for(int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    // Sorting (Bubble Sort)
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(strcmp(str[j], str[j + 1]) > 0) {
                // swap strings
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    // Display sorted strings
    printf("\nStrings in alphabetical order:\n");
    for(int i = 0; i < n; i++) {
        printf("%s", str[i]);
    }

    return 0;
}