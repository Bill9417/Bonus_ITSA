#include <stdio.h>
void payment(int n){
    double money;
    if(n<=800){
        money = n * 0.9;
        printf("%.1lf\n", money);
    }
    else if(n>800 && n<1500){
        money = n * 0.9 *0.9;
        printf("%.1lf\n", money);
    }
    else if(n>=1500){
        money = n * 0.9 * 0.79;
        printf("%.1lf\n", money);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    payment(n);
}