#include <stdio.h>

void printPyramid(int n) {
    for (int i = n; i >= 1; i--) {
       
        for (int j = i; j <= n; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
}

int main() {
    int n = 5; 
    printPyramid(n);
   
}
