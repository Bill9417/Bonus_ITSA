#include <stdio.h>
#include <math.h>

int main(){
    int numberA, numberB;
    int n;
    int highest_common_factor = 0;
    scanf("%d %d", &numberA, &numberB);
    if(numberA == numberB){
        printf("%d\n", numberA);
        return 0;
    }
    if(numberA > numberB){
        n = numberB;
    }else{
        n = numberA;
    }
    for(int i=n; i>=1 ; i--){
        if(numberA%i==0 && numberB%i==0){
            highest_common_factor = i;
            break;
        }
    }
    printf("%d\n", highest_common_factor);
}