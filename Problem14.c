#include <stdio.h>


int main(void){
    float x_spead = 100;
    float y_spead = 76.2;
    int distance_difference;
    scanf("%d", &distance_difference);
    int time_difference = distance_difference*100 / (x_spead - y_spead);
    printf("%d\n", time_difference+1);
}