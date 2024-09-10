#include <stdio.h>

void printInvertedPyramid(int n) {
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i; j++) {
            printf("%d ", j % 2);  
        }
       
        printf("\n");
    }
}

int main() {
    int n = 5; 
    printInvertedPyramid(n);
   
}
