#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int temp_max = 0;
    for(int i=0; i<n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp>temp_max){
            temp_max = temp;
        }
    }
    printf("%d\n",temp_max);
    return 0;
}