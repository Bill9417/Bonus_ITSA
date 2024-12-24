#include <stdio.h>
void total(int n){
    int sum = 0;
    for(int i=2; i<n; i++){
        if(i%6==0 && i%12!=0){
            sum += i;
        }
    }
    printf("%d\n", sum);
}

int main(){
    int n;
    scanf("%d",&n);
    total(n);
    return 0;
}