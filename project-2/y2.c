#include <stdio.h>

int main(){
    int rows = 4; 
    int new = 11; 

    for (int row = 1; row <= rows; row++){
        
        for (int col = 1; col <= row; col++){
            printf("%d ", new);
            new++; 
        }
        printf("\n"); 
    }


}