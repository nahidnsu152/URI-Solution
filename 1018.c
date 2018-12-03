#include<stdio.h>
int main(void){
    int input,temp, n_100,n_50,n_20,n_10,n_5,n_2;
    scanf("%d",&input);
    printf("%d\n",input);
    n_100=input/100;
    temp=input%100;
    printf("%d nota(s) de R$ 100,00\n",n_100);
    n_50=temp/50;
    temp=temp%50;
    printf("%d nota(s) de R$ 50,00\n",n_50);
    n_20=temp/20;
    temp=temp%20;
    printf("%d nota(s) de R$ 20,00\n",n_20);
    n_10=temp/10;
    temp=temp%10;
    printf("%d nota(s) de R$ 10,00\n",n_10);
    n_5=temp/5;
    temp=temp%5;
    printf("%d nota(s) de R$ 5,00\n",n_5);
    n_2=temp/2;
    temp=temp%2;
    printf("%d nota(s) de R$ 2,00\n",n_2);
    printf("%d nota(s) de R$ 1,00\n",temp);
    return 0;
}

/*

#include <stdio.h>



int main() {



int d[] = {100, 50, 20, 10, 5, 2, 1};

int n, t = 0;


scanf("%d", &n);

printf("%d\n", n);

do {

printf("%d nota(s) de R$ %d,00\n", n / d[t], d[t]);

if (n >= d[t])

n -= d[t] * (n / d[t]);

} while(d[t++] != 1);



    return 0;

} */
