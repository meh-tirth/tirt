#include <stdio.h>

int main(){
    int x;

    printf("number 1 :");
    scanf("%d",&x);

    if (x < 0)
    {
        printf("value 1 is negative");
    }
    
    else if (x > 0)
    {
        printf("value 1 is positive");
    }

    else
    {
      printf("value 1 is neutral");  
    }
}