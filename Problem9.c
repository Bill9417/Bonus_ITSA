#include <stdio.h>
void i_square(int k){
    int a = 2;
    if(k<=30){
        for(int i=1; i<k; i++){
        a = a * 2 ; 
    }
    printf("%d\n", a);
    }
    else {
        printf("Value of more than 31\n");
    }
   
}
int main(void){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int k;
        scanf("%d",&k);
        i_square(k);
    }
    return 0;
}