#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the largest prime less than or equal to a given number
void find_max_prime(int number) {
    for (int i = number; i >= 2; i--) {
        if (is_prime(i)) {
            printf("%d\n", i);
            return;
        }
    }
    // If no prime number is found
    //printf("No prime number found.\n");
}

int main() {
    int number;
    //("Enter a number: ");
    scanf("%d", &number);
    if(number == 1){
        printf("1\n");
        return 0;
    }
    find_max_prime(number);
    return 0;
}
