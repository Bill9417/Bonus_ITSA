#include <stdio.h>

int main(void) {
    int round;
    scanf("%d", &round); // Removed extra space in scanf
    for (int i = 0; i < round; i++) {
        double n;
        scanf("%lf", &n); // Corrected %f to %lf for double
        double area = n * n;
        printf("%.1f\n", area); // Prints with 1 decimal point
    }
    return 0;
}
