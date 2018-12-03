#include<stdio.h>
#define pi 3.14159

int main (){
    double A,B,C,triangle,circle,trapizium,square,reactangle;
    scanf("%lf %lf %lf",&A,&B,&C);
    triangle= 0.5*A*C;
    circle= pi*pow(C,2);
    trapizium= ((A+B)/2)*C;
    square = pow (B,2);
    reactangle = A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,circle,trapizium,square,reactangle);
    return 0;
}

