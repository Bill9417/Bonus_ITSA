#include <stdio.h>
void positve_negative(int n){
    if(n > 0){
        printf("正數\n");
    } else if(n < 0){
        printf("負數\n");
    } else {
        printf("0\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    positve_negative(n);
    return 0;
}