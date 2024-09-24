#include<stdio.h>

int cube(){
    int box;

    printf("Enter the value =>");
    scanf("%d",&box);

    if (box % 3 == 0 && box % 5 == 0)
    {
        printf("True \n");
    }
    else{
        printf("False \n");
    }
}
int main(){
    
    cube();
}