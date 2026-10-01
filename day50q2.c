// Print all sub-strings of a string.
#include <stdio.h>

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    n = 0;
    while (str[n] != '\0') {
        n++;
    }

    printf("All substrings are:\n");

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
