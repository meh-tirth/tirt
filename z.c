#include<stdio.h>

int main(){
    int user,start = 1;

    printf("Enter Number : ");
    scanf("%d",&user);

    while (start <= 10)
    {   
        printf("%d x %d = %d\n",user,start,user * start); 
        start++;
    }
}