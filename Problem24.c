#include <stdio.h>
void total(int n){

    for(int i=0; i<n; i++){
        int num1, num2, temp;
        int sum = 0;
        scanf("%d %d", &num1, &num2);
            if(num1 > num2){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }

        sum = (num2 - num1 +1) * (num1 + num2) / 2;
        printf("%d\n", sum);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    total(n);
    return 0;
}