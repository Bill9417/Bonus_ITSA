#include <stdio.h>

int main(void) {
    int number;
    int digits[4];  // Array to store the digits

    // Input: Read a 4-digit integer
    scanf("%d", &number);

    // Extract each digit and store it in the array
    for (int i = 3; i >= 0; i--) {
        digits[i] = number % 10;  // Extract the last digit
        number /= 10;             // Remove the last digit
    }

    // Output: Print each digit on a new line
    for (int i = 0; i < 4; i++) {
        printf("%d\n", digits[i]);
    }

    return 0;
}
