#include <stdio.h>
int main(){
    int choose;
    scanf("%d",&choose);
    switch (choose)
    {
    case 1:
        printf("Person\n");
        break;
    case 2:
        printf("Fairy\n");
        break;
    case 3:
        printf("Dwarf\n");
        break;
    }
}