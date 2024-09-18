#include <stdio.h>

int main() {
  
    for (int row = 1; row <= 5; row++){
       
        for (int col = 1; col <= row; col++){
            printf("%d ", col);
        }
        
        
        for (int k = 2 * (5 - row); k > 0; k--){
            printf("  ");
        }
        
       
        for (int col = row; col > 0; col--){
            printf("%d ", col);
        }
        
        printf("\n");
    }
    
 
}