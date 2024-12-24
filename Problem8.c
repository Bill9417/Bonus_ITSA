#include <stdio.h>
void calculate(int k){
    printf("%d %d %d\n", k,k*k, k*k*k);
}

int main(void){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        int k;
        scanf("%d", &k);
        calculate(k);
    }
    return 0;
}