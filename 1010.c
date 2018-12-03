#include<stdio.h>

int main (){
    int a,b,d,e;
    float c,f;
    double total;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&d,&e,&f);
    total=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}



