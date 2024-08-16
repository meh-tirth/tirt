#include<stdio.h>

int main(){
    int b,m;

    b = 99;
    m = 100;

    printf("b = %d\n",b);
    printf("m = %d\n\n",m);

    m = m - b;
    b = m + b;
    m = b - m;

 printf("b = %d\n",b);
    printf("m = %d\n",m);

}