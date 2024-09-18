#include <stdio.h>

int main() {
   
    for (int row= 0; row < 5; row++){
       
        for (int col = 0; col < row; col++){
            printf("  ");
        }
        
       
        for (int k = 0; k < 5 - row; k++){
            if (k % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        
      
        printf("\n");
    }

   
}