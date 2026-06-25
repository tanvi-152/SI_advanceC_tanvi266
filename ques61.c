#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert to lowercase
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase: %s", str);

    // Convert to uppercase
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase: %s", str);

    return 0;
}


//or
//#include <stdio.h>

//int main() {
   // char str[100];

    //printf("Enter a string: ");
   // fgets(str, sizeof(str), stdin);

    // Convert to lowercase
   // for(int i = 0; str[i] != '\0'; i++) {
       // if(str[i] >= 'A' && str[i] <= 'Z') {
           // str[i] = str[i] + 32;
// }
//}
   // printf("Lowercase: %s", str);

    // Convert to uppercase
    //for(int i = 0; str[i] != '\0'; i++) {
        //if(str[i] >= 'a' && str[i] <= 'z') {
          //  str[i] = str[i] - 32;
       // }
    //}
    //printf("Uppercase: %s", str);