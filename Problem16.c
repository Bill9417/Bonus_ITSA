#include <stdio.h>


int main(){
    int start_hour, start_minute;
    int end_hour, end_minute;
    int money;
    scanf("%d %d",&start_hour, &start_minute);
    scanf("%d %d",&end_hour, &end_minute);
    int total_minutes = (end_hour - start_hour) * 60 + (end_minute - start_minute);
    if(total_minutes>=240){
        total_minutes= total_minutes - 240;
        int x;
        x = total_minutes/30;
        money = 280 +x*60;

    }
    else if(total_minutes<240 && total_minutes >= 120){
        int x;
        x = total_minutes/30;
        money = 120 +x*40;
    }
    else{
        int x;
        x = total_minutes/30;
        money = x*30;
    }
    printf("%d\n",money);
}