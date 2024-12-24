#include <stdio.h>

int main(void){
    int number;
    scanf("%d", &number);
    int money = 0;
    if(number>=100){
        money = number  * 100 * 0.7;
    }
    else if(number>=30  && number <=99){
        money = number  * 100 * 0.8;
    }
    else if(number>0 && number <30){
        money = number  * 100 * 0.9;
    }
    printf("%d\n", money);

    return 0;
}