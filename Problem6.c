#include <stdio.h>
void square_value(int x, int y){
    int sum = x+y;
    printf("%d\n", sum*sum);
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        square_value(x, y);
    }
    return 0;
}
