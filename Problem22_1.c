#include <stdlib.h>
#include <stdio.h>
void decimal_to_binary(int number){
    int a[8]={0};
    int x = 128;
    if(number>=0){
        for (int i = 0; i < 8 ; i++)
        {
            if(number>= x){
                number = number - x;
                x = x/2;
                a[i] = 1;
            }
            else{
                x = x/2;
                a[i] = 0;
            }
        }
        
    }
    else if(number<0){
        a[0] = 1;
        number = -number;
        for(int i=1; i < 8 ; i++){
            if(number>= x){
                number = number - x;
                x = x/2;
                a[i] = 0;
            }
            else{
                x = x/2;
                a[i] = 1;
            }
        }
        /*if(a[7]==0){
            a[7] = 1;
        }
        else if(a[7]==1){
            a[7] = 0;
        }*/

    }
    for(int i=0; i<8; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}
int main(void){
    int number;
    scanf("%d",&number);
    decimal_to_binary(number);
    return 0;
}