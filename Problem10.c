#include <stdio.h>

void transform_unit(int miles){
    double km;
    km = miles * 1.6;
    printf("km=%.1f\n", km);
}

int main(void){
    int miles;
    scanf("%d", &miles);
    transform_unit(miles);
    return 0;
}