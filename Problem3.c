#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("NO\n");
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {   
        if (n % i == 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
