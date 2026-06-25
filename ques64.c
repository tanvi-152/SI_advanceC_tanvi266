//Find the frequency of characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};  // store frequency of all ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') {   // ignore newline
            freq[(int)str[i]]++;
        }
    }

    // Print frequency
    printf("\nCharacter Frequencies:\n");
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}