#include <stdio.h>
int main(void){
    int number;
    int digit[5];
    scanf("%d", &number);
    for(int i = 0; i < 5;i++){
        digit[i] = number % 10;
        number /= 10;
    }
    for(int i = 4; i >= 0; i--){
        for(int j = 0; j < digit[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}