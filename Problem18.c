#include <stdio.h>
void transform(int seconds){
    int day, hour, min, sec;
    day = seconds / (24 * 60 * 60);
    seconds %= (24 * 60 * 60);
    hour = seconds / (60 * 60);
    seconds %= (60 * 60);
    min = seconds / 60;
    seconds %= 60;
    sec = seconds;
    printf("%d days\n%d hours\n%d minutes\n%d seconds\n", day, hour, min, sec);
}
int main() {
    int seconds;
    scanf("%d", &seconds);
    transform(seconds);
    return 0;
}