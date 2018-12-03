#include <stdio.h>

void main () {

    int a, b, c;
    int big;

    scanf("%d %d %d", &a, &b, &c);

    big = (a+b+abs(a-b))/2;
    big = (big+c+abs(c-big))/2;

    printf("%d eh o maior\n", big);

    return 0;
}
