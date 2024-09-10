#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
       
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPyramid(n);
    
}
