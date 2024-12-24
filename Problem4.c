#include <stdio.h>

void add(int a, int b){
    int sum = a+b;
    printf("%d\n",sum);
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {   
        int a, b;
        scanf("%d %d", &a, &b);
        add(a, b);
    }
    return 0;
}