#include <stdio.h>

// Define the LED-style patterns for digits
char display[5][10][6] = {
    {"*****", "    *", "*****", "*****", "*   *", "*****", "*    ", "*****", "*****", "*****"},
    {"*   *", "    *", "    *", "    *", "*   *", "*    ", "*    ", "    *", "*   *", "*   *"},
    {"*   *", "    *", "*****", "*****", "*****", "*****", "*****", "    *", "*****", "*****"},
    {"*   *", "    *", "*    ", "    *", "    *", "    *", "*   *", "    *", "*   *", "    *"},
    {"*****", "    *", "*****", "*****", "    *", "*****", "*****", "    *", "*****", "    *"},
};

// Function to print the LED pattern for a given digit
void print_digit(int digit) {
    if (digit < 0 || digit > 9) {
        //printf("Invalid input! Please enter a single digit (0–9).\n");
        return;
    }

    for (int row = 0; row < 5; row++) {
        printf("%s\n", display[row][digit]);
    }
}

int main() {
    int digit;

    //printf("Enter a digit (0-9): ");
    scanf("%d", &digit);
    print_digit(digit);

    return 0;
}
