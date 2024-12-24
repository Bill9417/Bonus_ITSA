#include <stdio.h>
void calculate(int x, int y){
    printf("%d+%d=%d\n",x,y,x+y);
    printf("%d*%d=%d\n",x,y,x*y);
    printf("%d-%d=%d\n",x,y,x-y);
    int c = x/y;
    if(c < 0){
        c=c-1;
        printf("%d/%d=%d...%d\n",x,y,c,x-c*y);
    }
    else {
        printf("%d/%d=%d...%d\n",x,y,x/y,x%y);
    }
    
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    calculate(x, y);
    return 0;
}