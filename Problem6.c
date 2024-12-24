#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    for (int i=0; i<n; i++){
        int grade;
        scanf("%d",&grade);
        if(grade>=50  && grade<=70){
            printf("%d\n", grade);
        }
        else{
            printf("100\n");
        }
    }
    return 0;
}