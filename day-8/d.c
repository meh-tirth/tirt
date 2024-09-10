#include <stdio.h>

void printInvertedPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = i; j <= n; j++) {
            printf("%d ", j);
        }
       
        printf("\n");
    }
}

int main() {
    int n = 5; 
    printInvertedPyramid(n);
    
}
