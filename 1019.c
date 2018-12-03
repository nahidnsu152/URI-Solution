#include<stdio.h>
int main(void){
    int input, hour, minute, temp;
    scanf("%d",&input);
    hour=input/3600;
    temp=input%3600;
    minute=temp/60;
    temp=temp%60;
    printf("%d:%d:%d\n",hour,minute,temp);
    return 0;
}
