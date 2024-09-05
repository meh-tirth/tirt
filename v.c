#include<stdio.h>

int main(){
    int user,sum = 0;

    printf("enter Any Number : ");
    scanf("%d",&user);

    for (int a = 1; a <= user; a++)
    {
        sum += a;
    }
    printf("Sum Of The All Numbers : %d",sum);
}