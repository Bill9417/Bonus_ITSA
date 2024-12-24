#include <stdio.h>
int main(void){
    int number = 0;
    int digit[4];
    scanf("%d", &number);
    for(int i = 0; i < 4;i++){
        digit[i] = number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d,",digit[i]); 
    }
    printf("%d\n",digit[3]);
    return 0;
}