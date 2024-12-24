#include <stdio.h>
void exchange(int money){
    for (int i = 0; ; i++)
    {
        if (money < 10){
            printf("NT10=%d\n", i);
            //printf("%d\n", money);
            break;
        }
        else{
            money = money - 10;
        }
    }
    for (int i = 0; ; i++)
    {
        if (money < 5){
            printf("NT5=%d\n", i);
            //printf("%d\n", money);
            break;
        }
        else{
            money = money - 5;
        }
    }
    printf("NT1=%d\n", money);
    
}
int main(){
    int money;
    scanf("%d", &money);
    exchange(money);
}