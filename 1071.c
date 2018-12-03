#include<stdio.h>
int main(void){
    int i,a,b,temp,sum;
    while(scanf("%d%d",&a,&b)==2){
        sum=0;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2!=0){
        for(i=a+2;i<b;i++){
            if(i%2!=0)
                sum+=i;
            }
        }
        else{
            for(i=a+1;i<b;i++){
            if(i%2!=0)
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
