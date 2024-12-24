#include <string.h>
#include <stdio.h>
typedef struct{
    char english[10];
    char chinese[10];
}dictionary;
int main(void){
    dictionary dict[5] = {
        {"dog", "狗"},
        {"cat", "貓"},
        {"duck", "鴨"},
        {"cow", "牛"},
        {"fox", "狐"}
    };
    char input[10];
    scanf("%s",input);
    for(int i = 0; i < 5; i++){
       if(strcmp(input,dict[i].english) == 0){
        printf("%s\n", dict[i].chinese);
       }
       else if(strcmp(input,dict[i].chinese) == 0){
        printf("%s\n", dict[i].english);
       }
    } 
    return 0;
}