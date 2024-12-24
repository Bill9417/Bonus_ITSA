#include <stdio.h>
int main(void){
    int hours, basis_salary;
    scanf("%d %d",&hours,&basis_salary);
    double total_salary;
    if(hours>120){
        int x;
        x = hours - 120;
        total_salary = (60 * basis_salary)+(60 * basis_salary* 1.33) + (x * basis_salary * 1.66);
    }
    else if(hours>60){
        int x;
        x = hours - 60;
        total_salary = (60 * basis_salary)+(x * basis_salary * 1.33);
    }
    else {
        total_salary = hours * basis_salary;
    }
    printf("%.1lf\n",total_salary);
}