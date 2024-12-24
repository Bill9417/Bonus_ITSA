#include <stdio.h>

// Bubble sort implementation for 3 elements
void bubble_sort(int *a, int *b) {
    int n = b - a; // Calculate the size of the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[3] = {0};
    // Read 3 integers
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    // Sort the array
    bubble_sort(arr, arr + 3);
    // The maximum number is now at the last position
    printf("%d\n", arr[2]);
    return 0;
}
