#include <stdio.h>
#define MAX_LENGTH 10

typedef struct {
    char name[MAX_LENGTH];
    int grade;
} Information;

void pass_or_fail(Information *info, int *count) {
    if (info->grade >= 60) {
        printf("%s\n", info->name);
        (*count)++;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    Information subject[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s %d", subject[i].name, &subject[i].grade);
        pass_or_fail(&subject[i], &count);
    }

    if (count >= (n + 1) / 2) { // Handle odd values of n correctly
        printf("晉級\n");
    } else {
        printf("失敗\n");
    }

    return 0;
}
