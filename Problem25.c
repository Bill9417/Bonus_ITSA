#include <stdio.h>
#include <math.h>
int main(void){
    int x1,y1,x2,y2;
    double distance;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    distance = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
    distance = sqrt(distance);
    printf("%.2f\n", distance);  // print up to 2 decimal places
    return 0;
}