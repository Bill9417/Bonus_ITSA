#include <stdio.h>


int main(void){
    int base = 0, height = 0;
    float area = 0.0;
    scanf("%d ", &base);
    scanf("%d", &height);
    area = (base * height) / 2.0;  // Calculate the area of the triangle using the formula: Area = (base * height) / 2.0
    printf("Triangle area:%0.1f\n", area);
    return 0; 
}