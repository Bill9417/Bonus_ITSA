#include <stdio.h>
int main(void){
    int i, j, k;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    float x;
    x= (i+j)*k/2.0;
    printf("Trapezoid area:%0.1f\n",x);

    return 0;
}