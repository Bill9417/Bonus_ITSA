#include <stdio.h>

void triangle(int n) {
    switch (n) {
    case 1:
        // Hollow upright triangle
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5 - i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1 || i == 5) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;

    case 2:
        // Solid upright triangle
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5 - i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 3:
        // Solid inverted triangle
        for (int i = 5; i >= 1; i--) {
            for (int j = 1; j <= 5 - i; j++) {
                printf(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        break;

    default:
        printf("Invalid input\n");
        break;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    triangle(n);
    return 0;
}
