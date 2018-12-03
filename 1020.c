
#include<stdio.h>
int main(void){
    int input,temp,year,month;
    scanf("%d",&input);
    year=input/365;
    temp=input%365;
    month=temp/30;
    temp=temp%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,temp);
    return 0;
}
