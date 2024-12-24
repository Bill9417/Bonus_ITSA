#include <stdio.h>
int main(void){
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}