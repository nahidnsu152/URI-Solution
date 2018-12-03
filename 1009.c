#include<stdio.h>

int main (){
    char name[20];
    double sallary,sold,total;
    scanf("%s", &name);
    scanf("%lf", &sallary);
    scanf("%lf", &sold);
    total = sallary+((sold*15)/100);
    printf("TOTAL = R$ %.2lf",total);
    return 0;
}
