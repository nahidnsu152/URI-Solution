#include<stdio.h>
int main(void){
    float input,new_salary,total_salary;
    int bonus;
    while(scanf("%f",&input)==1){
        if(input<=400.00){
            bonus=15;
            new_salary=input*15.00/100.00;
        }
        else if(input>400.00 && input<=800.00){
            bonus=12;
            new_salary=input*12.00/100.00;
        }
        else if(input>800.00 && input<=1200.00){
            bonus=10;
            new_salary=input*10.00/100.00;
        }
        else if(input>1200.00 && input<=2000.00){
            bonus=7;
            new_salary=input*7.00/100.00;
        }
        else{
            bonus=4;
            new_salary=input*4.00/100.00;
    }
    total_salary=input+new_salary;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",total_salary,new_salary,bonus,'%');
    }
    return 0;
}
